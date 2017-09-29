//Linked List applied in: "C"
#include <bits/stdc++.h>
using namespace std;

//Declare a structure for Linked list, where data store value and next store the next location
struct Node{
	int data;
	struct Node *next;
};

struct Node *head, *tail;

/*------Insert Function-------*/
//Inset into tail	->O(1)
void tailInsert(int data)
{
	if(head == NULL){
		head = (struct Node *)malloc(sizeof(struct Node));
		head->data = data;
		head->next = NULL;
		tail = head;
	}
	else{
		struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = data;
		temp->next = NULL;
		tail->next = temp;
		tail = tail->next;
	}
}
//Insetr into head	->O(1)
void headInsert(int data)
{
	if(head == NULL){
		head = (struct Node *)malloc(sizeof(struct Node));
		head->data = data;
		head->next = NULL;
		tail = head;
	}
	else{
		struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = data;
		temp->next = head;
		head = temp;
	}
}
//Inset value after every n		->O(n)
void insertAfter(int n, int value)
{
	struct Node *current, *temp;
	if(head != NULL){
		current = head;

		while(current != NULL){
			if(current->data == n){
				temp = (struct Node *)malloc(sizeof(struct Node));
				temp->data = value;
				temp->next = current->next;
				if(current->next == NULL)
					tail = temp;
				current->next = temp;
				current = current->next;
			}
			current = current->next;
		}
	}
}
//Insert value before every n	->O(n)
void insertBefore(int n, int value)
{
	struct Node *current, *temp;
	if(head != NULL){
		if(head->data == n){
			temp = (struct Node *)malloc(sizeof(struct Node));
			temp->data = value;
			temp->next = head;
			head = temp;

			current = head->next;
		}
		else{
			current = head;
		}

		while(current->next != NULL){
			if(current->next->data == n){
				temp = (struct Node *)malloc(sizeof(struct Node));
				temp->data = value;
				temp->next = current->next;
				current->next = temp;
				current = current->next;
			}
			current = current->next;
		}
	}
}

//Length function -> O(1)
int len()
{
	//int con = 0;
	//Node *new_node = head;
	//while(new_node != NULL){
		//con++;
		//new_node = new_node->next;
	//}

	return abs(tail - head);
}


//Delete function
void Delete(Node *head, int data)
{
	Node *current_node = head;
	Node *previous_node = NULL;

	while(current_node->next != NULL){
		previous_node = current_node;
		current_node = current_node->next;
	}

	if(current_node == head){
		Node *temp = head;
		head = head->next;
		delete(temp);
	}
	else{
		previous_node->next = current_node->next;
		delete(current_node);
	}
}

//Search into Linked List		->linear search: O(n)
int searchLinkedList(int value)
{
	struct Node *current = head;
	int pos = 0;
	while(current != NULL){
		if(current->data == value)
			return pos;
		pos++;
		current = current->next;
	}
	return -1;						//if not found in the list
}

//Print the All Node value
void Print()
{
	struct Node *current = head;

	while(current != NULL){
		cout << current->data << endl;
		current = current->next;
	}
}

int main(void)
{
	cout << "Inset into Tail" << endl;
	for(int i = 1; i <= 5; i++)
		tailInsert(i);
	Print();

	cout << "Insert into Head" << endl;
	for(int i = 0; i < 5; i++)
		headInsert(i);
	Print();

	cout << "Length: " << len() << endl;
	cout << endl;

	cout << "Insert After" << endl;
	for(int i = 1, n, v; i <= 3; i++){			//insert value after every n
		cout << "After position: ";
		cin >> n;
		cout << "Value: ";
		cin >> v;

		insertAfter(n, v);
		Print();
	}

	cout << "Insert Before" << endl;
	for(int i = 1, n, v; i <= 2; i++){			//insert value after every n
		cout << "Before position: ";
		cin >> n;
		cout << "Value: ";
		cin >> v;

		insertBefore(n, v);
		Print();
	}

	cout << "---#Search#---" << endl;
	for(int i = 0, n; i < 5; i++){
		cin >> n;

		int flag = searchLinkedList(n);			//0 indexing
		if(flag == - 1)
			cout << n << " not found" << endl;
		else
			cout << n << " found at " << flag << endl;
	}

	return 0;
}
