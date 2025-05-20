#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAfterNode(struct Node* prevNode, int data) {
    if (prevNode == NULL) return;
    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) return;
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAfterNode(struct Node* prevNode) {
    if (prevNode == NULL || prevNode->next == NULL) return;
    struct Node* temp = prevNode->next;
    prevNode->next = temp->next;
    free(temp);
}

void deleteAtEnd(struct Node** head) {
    if (*head == NULL) return;

    struct Node* temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int getLength(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct Node* head = createNode(45);
    head->next = createNode(418);
    head->next->next = createNode(78);
    head->next->next->next = createNode(418);
    head->next->next->next->next = createNode(7);
    printf("Linked list: ");
    printList(head);

    printf("Length of list: %d\n", getLength(head));

    insertAtBeginning(&head, 66);
    printf("Insertion at the beginning: ");
    printList(head);

    insertAfterNode(head->next, 58);
    printf("Insertion after a node: ");
    printList(head);

    deleteAtBeginning(&head);
    printf("List after deletion at beginning: ");
    printList(head);

    deleteAfterNode(head);
    printf("Deletion after a node: ");
    printList(head);

    deleteAtEnd(&head);
    printf("Deletion at the end: ");
    printList(head);

    return 0;
}