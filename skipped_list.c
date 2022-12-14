#include <stdio.h>
#include <stdlib.h>
struct llist{
int data;
struct llist* next;
struct llist* next5;
};
struct llist* linkedList()
{
int n;
printf("Enter the Size of Linked List : \n");
scanf("%d",&n);
int counter = 1;
struct llist* head = (struct llist*)malloc(sizeof(struct llist));
printf("Enter the value of head : \n");
int val;
scanf("%d",&val);
head->data = val;
head->next= NULL;
struct llist* s;
struct llist* temp;
temp = head;
s = head;
while(n!=1)
{
int data;
printf("Enter remaining data : \n");
scanf("%d",&data);
struct llist* node;
node = (struct llist*)malloc(sizeof(struct llist));
node -> data = data;
node -> next = NULL;
s ->next= node;
if((counter%4)==0)
{
temp->next5= node;
temp = node;
}
s = node;
n = n - 1;
counter++;
}
return(head);
}
int main(){
struct llist *list;
list = linkedList();
while(list!=NULL)
{
printf("%d\n",list->data);
list = list -> next5;
}
};