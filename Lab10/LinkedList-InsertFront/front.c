#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = (char*) malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* linkedList = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    linkedList->count = 0;
    linkedList->head = NULL;
    return linkedList;
}

void insert_front(SinglyLinkedList* list, char* data);
void insert_last(SinglyLinkedList* list, char* data);
void traverse(SinglyLinkedList* list);

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); 
        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);
    // Remember to free allocated memory for each node's data
    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}

void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* newNode = createDataNode(data);
    if (list->count = 0) {
        list->head = newNode;
    } else {
        newNode->next = list->head;
        list->head = newNode;
    }
    list->count++;
}

void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* newNode = createDataNode(data);
    if (list->count == 0) {
        list->head = newNode;
    } else {
        DataNode* pointer = list->head;
        while (pointer->next != NULL) {
            pointer = pointer->next;
        }
        pointer->next = newNode;
    }
    list->count++;
}

void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    DataNode* newNode = list->head;
    while (newNode->next != NULL) {
        printf("%s -> ", newNode->data);
        newNode = newNode->next;
    }
    printf("%s", newNode->data);
}
