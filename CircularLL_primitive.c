#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;

void create() {
    int n, value;
    struct node *newnode;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        newnode->data = value;
        if (last == NULL) {
            last = newnode;
            last->next = last;
        } else {
            newnode->next = last->next;
            last->next = newnode;
            last = newnode;
        }
    }
}

void display() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = last->next;
    printf("Circular Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

void insert_begin(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    if (last == NULL) {
        last = newnode;
        last->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
    }
}

void insert_end(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    if (last == NULL) {
        last = newnode;
        last->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

void delete_begin() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = last->next;
    if (last->next == last) {
        last = NULL;
    } else {
        last->next = temp->next;
    }
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void delete_end() {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = last->next;
    if (last->next == last) {
        printf("Deleted: %d\n", last->data);
        free(last);
        last = NULL;
        return;
    }
    while (temp->next != last)
        temp = temp->next;
    temp->next = last->next;
    printf("Deleted: %d\n", last->data);
    free(last);
    last = temp;
}

int main() {
    int choice, val;
    while (1) {
        printf("1. Create\n2. Display\n3. Insert at Beginning\n4. Insert at End\n");
        printf("5. Delete from Beginning\n6. Delete from End\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &val);
                insert_begin(val);
                break;
            case 4:
                printf("Enter value to insert at end: ");
                scanf("%d", &val);
                insert_end(val);
                break;
            case 5:
                delete_begin();
                break;
            case 6:
                delete_end();
                break;
            case 7:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
