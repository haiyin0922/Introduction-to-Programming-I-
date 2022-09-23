#include <stdio.h>
#include <stdlib.h>
#include "10945.h"

void printList(Node *head);
void freeList(Node*);

void insert_increase_list(Node**head, int num){

    Node* now;
    Node* temp;

    now = (Node*)malloc(sizeof(Node));
    now->data = num;

    if(*head == NULL){
        now->next = NULL;
        *head = now;
    }
    else if(num <= (*head)->data){
        now->next = *head;
        *head = now;
    }
    else{
        for(temp = *head; temp->next != NULL; temp = temp->next){
            if(temp->next->data >= now->data)
            break;
        }
        now->next = temp->next;
        temp->next = now;
    }
}

int main() {
	Node *head = NULL;
	int data;

	while(1){
		scanf("%d", &data);
		if (data >= 0) {
			insert_increase_list(&head, data);
		} else break;
	}

	printList(head);
	freeList(head);
	return 0;
}

void freeList(Node *head)
{
	Node *temp;
	for(temp=head; temp!=NULL; temp=head)
	{
		head = head->next;
		free(temp);
	}
}

void printList(Node *head)
{
	Node *temp;
	for(temp = head; temp!=NULL; temp=temp->next)
	{
		printf("%d ", temp->data);
	}
	printf("\n");
}
