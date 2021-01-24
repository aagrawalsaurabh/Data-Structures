#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Insertion At Beginning
// void insertAtFirst(struct node *head)
// {
//     struct node *insertNode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data you want to insert\n");
//     scanf("%d", &insertNode->data);
//     insertNode->next = head;
//     head = insertNode;
// }

// Insertion After Position
void insertAFterPos(struct node *temp, struct node *head, int count)
{
    int i = 1, pos;
    printf("Enter the position after which you want to insert ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Invalid Position");
    }
    else
    {
        struct node *insertNode = (struct node *)malloc(sizeof(struct node));
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter the data you want to insert ");
        scanf("%d", &insertNode->data);
        insertNode->next = temp->next;
        temp->next = insertNode;
    }
}

// Insertion At End
// void insertAtEnd(struct node *head,struct node *temp){
//     struct node *insertNode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data you want to insert ");
//     scanf("%d", &insertNode->data);
//     temp = head;
//     while (temp->next!=0)
//     {
//         temp = temp->next;
//     }
//     temp->next = insertNode;
//     insertNode->next = 0;
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
    int count = 0;
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
        count++;
        printf("Do You want to continue (0,1)? ");
        scanf("%d", &choice);
    }

    // printf("Count is %d\n",count);
    // insertAtFirst(head);
    insertAFterPos(temp, head, count);
    // insertAtEnd(head,temp);
    linkedListTraversal(temp, head);
    return 0;
}