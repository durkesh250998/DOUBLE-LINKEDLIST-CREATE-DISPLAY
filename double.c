#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *next=NULL;
struct node *prev=NULL;
struct node *new=NULL;
struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;
int main(){
    create();
    display();
}
void create(){
    int n;
    printf("enter the total number of nodes :" );
    scanf("%d",&n);
    
    
    
    for(int i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        
        new->prev=NULL;
        new->next=NULL;
        if(head==NULL){
                     head=new;
                     tail=new;
                    
    }
        else{
                    tail->next=new;
                    new->prev=tail;
                    tail=new;
                    
    }
    }
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;

    }
}