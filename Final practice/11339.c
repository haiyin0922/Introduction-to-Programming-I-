#include<stdio.h>
#include<stddef.h>

typedef struct node
{
	struct node *next;
	struct node *prev;
	unsigned short val;
} Node;

void do_I(Node **head,size_t pos,unsigned short val);
void do_E(Node **head,size_t begin_pos,size_t end_pos);
void do_P(Node  *head,size_t pos);
void do_R(Node **head,unsigned short val);
void do_S(Node  *head);

int main(void)
{
	Node *head=NULL;
	size_t N;
	scanf("%u",&N);
	while(N--)
	{
		char op;
		unsigned short val;
		size_t pos,begin_pos,end_pos;
		scanf(" %c",&op);
		switch(op)
		{
		case 'I':
			scanf("%u %hu",&pos,&val);
			do_I(&head,pos,val);
			break;
		case 'E':
			scanf("%u %u",&begin_pos,&end_pos);
			do_E(&head,begin_pos,end_pos);
			break;
		case 'P':
			scanf("%u",&pos);
			do_P(head,pos);
			break;
		case 'R':
			scanf("%hu",&val);
			do_R(&head,val);
			break;
		case 'S':
			do_S(head);
			break;
		}
	}
            return 0;
}

void do_I(Node **head,size_t pos,unsigned short num)
{
    Node *now;
    Node *temp;

    now = (Node*)malloc(sizeof(Node));
    now->val = num;

    int i; //listªºªø«×
    i = 1;
    for(temp = *head; ; temp = temp->next){
        if(temp->next == NULL)
        break;
        i++;
    }

    if(*head == NULL){
        now->next=NULL;
        *head = now;
    }

    else{
        if(pos>=i){
            for(temp = *head; ; temp = temp->next){
                if(temp->next == NULL)
                temp->next = now;
                break;
            }
        }
        if(pos==0){
            now->next = *head;
            *head = now;
        }
        if(0<pos<i){
            int j;
            j = 0;
            for(temp = *head; ; temp = temp->next){
                j++;
                if(j == pos){
                    now->next = temp->next;
                    temp->next = now;
                }
            }

        }
    }
}
void do_E(Node **head,size_t begin_pos,size_t end_pos){
    Node* temp;
    int i=1;
    int j = end_pos-begin_pos+1;

    for(temp = *head; ; temp = temp->next){
        if(temp->next == NULL)
        break;
        i++;
    }

    if(j==0 || begin_pos>=i)
        return;

    else{
        if(end_pos>=i)

        for(temp = head; temp != NULL; temp = temp->next){
            if(temp->next == begin_pos){
                ;
            }
        }
    }

}
void do_P(Node  *head,size_t pos){
    Node* temp;

    temp = head;
    int i;
    for(i=0; i<pos; i++){
        if(temp->next==NULL)
        break;
        temp = temp->next;
    }
    printf("%d ", temp->val);
}
void do_R(Node **head,unsigned short val){

}

void do_S(Node *head){
    Node *temp;

	for(temp = head; temp != NULL; temp = temp->next){
		printf("%d ", temp->val);
	}
	printf("\n");
}
