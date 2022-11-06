#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node *reverse (struct Node *head, int k)
{
	if (!head)
		return NULL;

	struct Node* current = head;
	struct Node* next = NULL;
	struct Node* prev = NULL;
	int count = 0;

	while (current != NULL && count < k)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}
	if (next != NULL)
	head->next = reverse(next, k);
	return prev;
}

void push(struct Node** head, int new_data)
{
	struct Node* new_node =
			(struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head);

	(*head) = new_node;
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

int main(void)
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
    int c;
    printf("\n Enter Chunk Size : ");
    scanf("%d",&c);
	printf("\nGiven linked list \n");
	printList(head);
	head = reverse(head, c);

	printf("\nReversed Linked list \n");
	printList(head);

	return 0;
}
