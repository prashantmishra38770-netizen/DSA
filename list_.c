
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Create Linked List */
void create_list()
{
    if (head == NULL)
    {
        int num;
        struct node *newnode, *temp;

        printf("Enter a num: ");
        scanf("%d", &num);

        head = (struct node *)malloc(sizeof(struct node));

        head->data = num;
        head->next = NULL;

        temp = head;

        while (1)
        {
            printf("Enter 1 if you want to add more element: ");
            scanf("%d", &num);

            if (num == 1)
            {
                printf("Enter a num: ");
                scanf("%d", &num);

                newnode = (struct node *)malloc(sizeof(struct node));

                newnode->data = num;
                newnode->next = NULL;

                temp->next = newnode;
                temp = newnode;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("List is already created.\n");
    }
}

/* Display Linked List */
void display_list()
{
    struct node *temp;

    if (head != NULL)
    {
        temp = head;

        printf("Linked list elements are: ");

        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }

        printf("\n");
    }
    else
    {
        printf("List is empty.\n");
    }
}

/* Insert at First */
void insert_at_first()
{
    struct node *newnode;
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = num;
    newnode->next = head;

    head = newnode;

    printf("Element inserted at first.\n");
}

/* Insert at Last */
void insert_at_last()
{
    struct node *newnode, *temp;
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = num;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    printf("Element inserted at last.\n");
}

/* Delete from First */
void delete_at_first()
{
    struct node *temp;

    if (head != NULL)
    {
        temp = head;

        head = head->next;

        printf("Element %d is deleted.\n", temp->data);

        free(temp);
    }
    else
    {
        printf("First create the list, then delete.\n");
    }
}

/* Delete from Last */
void delete_at_last()
{
    struct node *temp, *prev;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    if (head->next == NULL)
    {
        printf("Element %d is deleted.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;

    printf("Element %d is deleted.\n", temp->data);

    free(temp);
}
 

/* Main */
int main()
{
    int num;

    while (1)
    {
        printf("\n\nWelcome to my Linked List Program:\n");

        printf("Press 1 to create list\n");
        printf("Press 2 to display\n");
        printf("Press 3 to insert at first\n");
        printf("Press 4 to insert at last\n");
        printf("Press 5 to delete from first\n");
        printf("Press 6 to delete from last\n");
        printf("Press 7 to exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            create_list();
            break;

        case 2:
            display_list();
            break;

        case 3:
            insert_at_first();
            break;

        case 4:
            insert_at_last();
            break;

        case 5:
            delete_at_first();
            break;

        case 6:
            delete_at_last();

            break;
        case 7:



        case 7:
            printf("\nProgram terminated.\n");
            return 0;

        default:
            printf("\nInvalid choice.\n");
        }
    }

    return 0;
}