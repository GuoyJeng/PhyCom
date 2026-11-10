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
    newNode->data = malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* list = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}

void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* newNode = createDataNode(data);
    if (list->count == 0) {
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
    } else {
        DataNode* pointer = list->head;
        while (pointer->next != NULL) {
            printf("%s -> ", pointer->data);
            pointer = pointer->next;
        }
        printf("%s", pointer->data);
    }
}

void delete(SinglyLinkedList* list, char* data) {
    DataNode* current = list->head;
    DataNode* previous = NULL;
    while (current != NULL) {
        if (current == list->head && strcmp(current->data, data) == 0) {
            list->head = current->next;
            list->count--;
            free(current->data);
            free(current);
            return;
        }
        if (strcmp(current->data, data) == 0) {
            if (current->next != NULL) {
                previous->next = current->next;
            } else {
                previous->next = NULL;
            }
            free(current->data);
            free(current);
            list->count--;
            return;
        }
        previous = current;
        current = current->next;
    }
    printf("Cannot delete, %s does not exist.\n", data);
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; // Assuming a maximum string length of 99 characters
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); // Read condition and string data

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
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
