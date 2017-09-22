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
//Inset data after every n
void InsertAfter(int data, int n)
{

}
//Insert data before every n
void InsetBefore(int data, int n)
{

}

//Length function -> O(n)
int len(Node *head)
{
	int con = 0;
	Node *new_node = head;
	while(new_node != NULL){
		con++;
		new_node = new_node->next;
	}

	return con;
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

//Print the Node value
void Print()
{
	while(head != NULL){
		cout << head->data << endl;
		head = head->next;
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

	return 0;
}
