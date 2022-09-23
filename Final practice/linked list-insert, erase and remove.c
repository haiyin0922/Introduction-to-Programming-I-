void do_I(Node **head,size_t pos,unsigned short num)
{
    Node *now;
    Node *temp;

    now = (Node*)malloc(sizeof(Node));
    now->val = num;

    int i=1;
    for(temp = *head; ; temp = temp->next){
        if(temp->next == NULL)
        break;
        i++;
    }

    if(*head == NULL)
        now->next=NULL;
        *head = now;

    else{
        if(pos>=i){
            for(temp = *head; ; temp = temp->next){
                if(temp->next == NULL)
                temp->next = now;
            }
        }
        if(pos==0){
            now->next = *head;
            *head = now;
        }
        if(0<pos<i){
            int j=0;
            for(temp = *head; ; temp = temp->next){
                if(j==pos-1){
                    now->next = temp->next;
                    temp->next = now;
                }
            }

        }
    }
}
void do_E(Node **head,size_t begin_pos,size_t end_pos){
    if(begin_pos==end_pos)
        return;

    else{
        for(temp = head; temp != NULL; temp = temp->next){
            if(temp->next == begin_pos){
                temp->next = end_pos->next;
            }
        }
    }

}
void do_P(Node  *head,size_t pos);
void do_R(Node **head,unsigned short val){

}

void do_S(Node *head){
    Node *temp;

	for(temp = head; temp != NULL; temp = temp->next){
		printf("%d ", temp->val);
	}
	printf("\n");
}
