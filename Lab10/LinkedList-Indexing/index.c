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

DataNode* creatDataNode(char* data) {
    DataNode* newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = malloc(strlen(data) + 1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* newNode = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    newNode->count = 0;
    newNode->head = NULL;
    return newNode;
}

void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* newNode = creatDataNode(data);
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

int main() {
    char* food = (char*) malloc(21 * sizeof(char));
    int count = 0;
    SinglyLinkedList* list = createSinglyLinkedList();
    while (1) {
        fgets(food, 21, stdin);

        char* newline = strchr(food, '\n');
        if (newline != NULL) {
            *newline = '\0';
        }

        if (strcmp(food, "Last") == 0) {
            break;
        }

        insert_last(list, food);
    }
    scanf(" %d", &count);
    DataNode* ans = list->head;
    int check = 0;
    if (count < 0) {
        count = list->count + count;
    }
    while (ans->next != NULL) {
        if (check == count) {
            break;
        }
        ans = ans->next;
        check++;
    }
    if (check == count) {
        printf("%s", ans->data);
    } else {
        printf("Error");
    }
}
