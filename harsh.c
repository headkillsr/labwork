#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    
};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf ("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void deleteAlt(struct node *head)
{ 
    if (head == NULL) 
        return; 
  
    /* Initialize prev and node to be deleted */
struct node*prev=head;
struct node*node= head->next; 
  
    while (prev != NULL && node != NULL) 
    { 
        /* Change next link of previous node */
        prev->next = node->next; 
  
        /* Update prev and node */
        prev = prev->next; 
        if (prev != NULL) 
            node = prev->next; 
    } 
} 
int main(){
    struct node*head,*second,*third,*fourth,*fifth,*sixth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));

    head->data=12;
    head->next=second;
    
    second->data=14;
    second->next=third;


    third->data=16;
    third->next=fourth;


    fourth->data=18;
    fourth->next=fifth;


    fifth->data=20;
    fifth->next=sixth;


    sixth->data=22;
    sixth->next=NULL;
    traversal(head);
    deleteAlt(head);
    printf("elements after the deletion\n");
    traversal(head);
    
    return 0;




}
