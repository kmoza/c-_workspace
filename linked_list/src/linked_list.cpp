/*
 * linked_list.cpp
 *
 *  Created on: 30-Dec-2013
 *      Author: kmoza
 */
#include<iostream>
#include<stdlib.h>
#include<cassert>

using namespace std;

struct list{
	int data;
	struct list* next;
};

typedef struct list LIST;

void insert_list(LIST *head, int data);
void delete_list(LIST *head,int data);
void display_list(LIST *head);

int main(){
	char choice = 'y';
	int option;

	LIST *head=NULL;

	do{
		cout<<"Enter your choice::\n";
		cout<<"1. Insert into list\n";
		cout<<"2. Delete from list\n";
		cout<<"3. Display list\n";
		cout<<"4. Exit menu";
		cin>>option;

		switch(option)
		{
		case 1:
			cout<<"Enter data for insertion:\n";
			int temp;
			cin>>temp;
			insert_list(head,temp);
			break;

		case 2:
			cout<<"Enter data for deletion\n";
			cin>>temp;
			delete_list(head,temp);
			break;

		case 3:
			display_list(head);
			break;

		case 4:
			cout<<"Good Bye\n";
			exit(0);

		default:
			cout<<"No case matched\n";
			break;
		}
		cout<<"Enter y to repeat again\n";
		cin>>choice;
	}while(choice=='y'|| choice =='Y');
}

void display_list(LIST *head){
	cout<<"List is as follows:\n";
	if(head==NULL){
		cout<<"List is empty \t Kindly insert some data first\n ";
	}
	else
	{
		LIST *temp;
		temp=head;
	while(temp){
		cout<<temp->data;
		cout<<"->";
		temp=temp->next;

	}
	}
}

void insert_list(LIST *head,int data){
	cout<<"Inserting into linked list:\n";
	LIST *temp = (LIST*) malloc(sizeof(LIST));
	assert(temp!=NULL);
	temp->data = data;
	temp->next= NULL;
	LIST *traverse_head = head;
	if(head==NULL){
		head=temp;
	}
	else
	{
		while(!traverse_head){
			traverse_head = traverse_head->next;
		}
		traverse_head = temp;

	}
}

void delete_list(LIST *head,int data){
	cout<<"Deleting from linked list:\n";
}
