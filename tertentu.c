#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* new_node = newNode(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void deleteNodeWithData(struct Node** head, int data) {
    if (*head == NULL) return;

    struct Node* temp = *head, *prev = NULL;
    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nData %d tidak ditemukan di dalam linked list.\n", data);
        return;
    }

    if (prev == NULL) {
        *head = (*head)->next;
    } else {
        prev->next = temp->next;
    }

    free(temp);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int tertentu() {
    struct Node* head = NULL;
    int data, deleteData, lanjut;

    do {
        printf("Data yang mau disimpan: ");
        scanf("%d", &data);
        insertAtEnd(&head, data);

        printf("Lagi (Y/N)? ");
        scanf(" %c", &lanjut);
    } while (lanjut == 'Y' || lanjut == 'y');

    while (head != NULL) {

        printf("\nMenghapus data posisi terentu?\n");
        printf("Data yang mau dihapus: ");
        scanf("%d", &deleteData);

        deleteNodeWithData(&head, deleteData);

        printf("Isi dari SLL:\n");
        printList(head);
    }

    printf("Kosong");

    return 0;
}
