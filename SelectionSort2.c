#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node* selectionsortfunction(struct Node* head)
{
    struct Node *x, *y, *z, *w, *s;
    x = y = head;
    while (y->next) {
        z = w = y->next;
        while (w) {
            if (y->data > w->data) {
                if (y->next == w) {
                    if (y == head) {
                        y->next = w->next;
                        w->next = y;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        head = y;
                        w = w->next;
                    }
                    else {
                        y->next = w->next;
                        w->next = y;
                        x->next = w;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        w = w->next;
                    }
                }
                else {
                    if (y == head) {
                        s = y->next;
                        y->next = w->next;
                        w->next = s;
                        z->next = y;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        w = w->next;
                        head = y;
                    }
                    else {
                        s = y->next;
                        y->next = w->next;
                        w->next = s;
                        z->next = y;
                        x->next = w;
                        s = y;
                        y = w;
                        w = s;
                        z = w;
                        w = w->next;
                    }
                }
            }
            else {
                z = w;
                w = w->next;
            }
        }
        x = y;
        y = y->next;
    }
    
    return head;
}
void print(struct Node* head){
    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    struct Node *prev,*head,*p;
    int n,i;
    printf ("Number of Nodes in LinkedList : ");
    scanf("%d",&n);
    head=NULL;
    printf("\nEnter the Nodes : \n");
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct Node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    head=selectionsortfunction(head);
    printf("After Sorting Using Selection Sort : \n");
    print(head);
}