#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// Function to delete the middle node in the list
struct node* deletelist(struct node* head) {
    int i = 0;
    struct node* p = head;
    //struct node* q = head;
    struct node* prev = NULL;

    // Calculate the length of the list
    while (p != NULL) {
        p = p->next;
        i++;
    }

    int m = (i - 1) / 2; // Find the middle node
    i = 0;
    p = head;

    // Traverse to the middle node
    while (i < m) {
        prev = p;
        p = p->next;
        i++;
    }

    if (prev != NULL) {
        prev->next = p->next;
    } else {
        head = p->next; // If the head is the middle node
    }

    free(p);
    return head;
}

// Helper function to print the linked list
void printList(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Helper function to add a new node at the end
struct node* addNode(struct node* head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    struct node* head = NULL;
    head = addNode(head, 1);
    head = addNode(head, 2);
    head = addNode(head, 3);
    head = addNode(head, 4);
    head = addNode(head, 5);

    printf("Original List:\n");
    printList(head);

    head = deletelist(head);

    printf("List after deleting the middle node:\n");
    printList(head);

    return 0;
}
