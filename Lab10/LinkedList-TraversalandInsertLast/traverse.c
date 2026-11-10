#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

// SinglyLinkedList structure using typedef
typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*) malloc(sizeof(DataNode));
    newNode->data = malloc(sizeof(char) * (strlen(data) + 1));
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

// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        // ปริ้นข้อมูลและขยับ pointer ไปเรื่อยๆ จนถึงโหนดตัวสุดท้าย
        printf("%s -> ", pointer->data);
        pointer = pointer->next;
    }
    printf("%s", pointer->data);
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    struct DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        // ถ้า Linked List ว่างให้เปลี่ยนตำแหน่ง list->head ไปที่ pNew
        list->head = pNew;
    } else {
        // ถ้า Linked List ไม่ว่างให้สร้าง Pointer ตัวใหม่และขยับไปที่โหนดสุดท้ายและเปลี่ยน pointer->next เป็น pNew
        DataNode* pointer = list->head;
        while (pointer->next != NULL) {
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

int main() {
    SinglyLinkedList* myList = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            ;
        } else if (condition == 'L') {
            insert_last(myList, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(myList);

    // Remember to free allocated memory for each node's data
    DataNode *current = myList->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(myList);
    return 0;
}
