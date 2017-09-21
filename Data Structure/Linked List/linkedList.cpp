#include <bits/stdc++.h>
using namespace std;

//Declare a structure for Linked list, where data store value and next store the next location
struct Node{
	int data;
	struct Node *next;
};

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

//Insertion at the beginnig -> O(1)
void AddTop(Node **head, int data)
{
	Node *new_node = new Node();
	new_node->data = data;
	new_node->next = *head;
	*head = new_node;
}

//Insert function, O(n)
void Append(Node *head, int data)
{
	if(head == NULL){				//check the list is empty or not?
		head = new Node();
		head->data = data;
		head->next = NULL;
	}
	else{
		Node *current_node = head;
		while(current_node->next != NULL){
			current_node = current_node->next;
		}

		struct Node *new_node = new Node();
		new_node->data = data;
		new_node->next = NULL;

		current_node->next = new_node;
	}
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
void Print(Node *head)
{
	while(head != NULL){
		cout << head->data << endl;
		head = head->next;
	}
}

int main(void)
{
	Node *head = new Node();
	head->data = 1;
	head->next = NULL;

	cout << "First Linked List" << endl;
	Print(head);

	Append(head, 2);
	Append(head, 5);
	cout << "After Added Linked List" << endl;
	Print(head);

	cout << "The length of the list is: " << len(head) << endl;

	cout << "Inserting into the Top" << endl;
	AddTop(&head, 7);
	Print(head);

	cout << "After delete from the List" << endl;
	Delete(head, 2);
	Print(head);

	return 0;
}
