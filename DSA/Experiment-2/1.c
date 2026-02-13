#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertBeginning(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void deleteBeginning() {
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void display() {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertBeginning(10);
    insertEnd(20);
    insertEnd(30);
    display();
    deleteBeginning();
    display();
    return 0;
}
