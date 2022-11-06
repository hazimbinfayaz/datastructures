#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

static void reverse(struct Node** head)
{
	struct Node* prev = NULL;
	struct Node* current = *head;
	struct Node* next = NULL;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

void push(struct Node** head, int data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = (*head);
	(*head) = new_node;
}

void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
    struct Node *prev,*head,*p;
    int n,i;
    printf ("Number of Nodes in LinkedList : ");
    scanf("%d",&n);
    head=NULL;
    printf("\n Enter the Nodes : \n");
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

	printf("Original linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed linked list \n");
	printList(head);
	getchar();
}
