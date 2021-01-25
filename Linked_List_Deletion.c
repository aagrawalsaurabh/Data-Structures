#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Deletion At Beginning
// struct node *deleteAtFirst(struct node *head, struct node *temp)
// {
//     if (head == 0)
//     {
//         printf("List is empty!");
//     }
//     else
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//         return head;
//     }
// }

// Deleting From Sepcified Position
void deleteAtPos(struct node *head, struct node *temp)
{
    struct node *nextnode;
    int pos, i = 1;
    temp = head;
    printf("Enter the position of element to be deleted ");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

// Deletion At End
// void deleteAtEnd(struct node *head, struct node *temp)
// {
//     struct node *prevnode;
//     temp = head;
//     while (temp->next != 0)
//     {
//         prevnode = temp;
//         temp = temp->next;
//     }
//     if (temp == head)
//     {
//         head = 0;
//     }
//     else
//     {
//         prevnode->next = 0;
//     }
//     free(temp);
// }

void linkedListTraversal(struct node *temp, struct node *head)
{
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head, *newnode, *temp;
    int choice;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do You want to continue (0,1)? ");
        scanf("%d", &choice);
    }
    printf("Linked List Before Deletion\n");
    linkedListTraversal(temp, head);
    // head = deleteAtFirst(head, temp);
    deleteAtPos(head, temp);
    // deleteAtEnd(head, temp);
    printf("Linked List After Deletion\n");
    linkedListTraversal(temp, head);
    return 0;
}