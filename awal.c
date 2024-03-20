//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node {
//    int data;
//    struct Node* next;
//};
//
//struct Node* newNode(int data) {
//    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//    new_node->data = data;
//    new_node->next = NULL;
//    return new_node;
//}
//
//void insertAtEnd(struct Node** head, int data) {
//    struct Node* new_node = newNode(data);
//    if (*head == NULL) {
//        *head = new_node;
//        return;
//    }
//    struct Node* last = *head;
//    while (last->next != NULL) {
//        last = last->next;
//    }
//    last->next = new_node;
//}
//
//void deleteFirstNode(struct Node** head) {
//    if (*head == NULL) return;
//    struct Node* temp = *head;
//    *head = (*head)->next;
//    free(temp);
//}
//
//void printList(struct Node* node) {
//    while (node != NULL) {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//    printf("\n");
//}
//
//int awal() {
//    struct Node* head = NULL;
//    int data, lanjut;
//
//    do {
//        printf("Data yang mau disimpan: ");
//        scanf("%d", &data);
//        insertAtEnd(&head, data);
//
//        printf("Lagi (Y/N)? ");
//        scanf(" %c", &lanjut);
//    } while (lanjut == 'Y' || lanjut == 'y');
//
//    while (head != NULL) {
//        printf("\nMenghapus node posisi awal\n");
//        printf("Isi dari SLL:\n");
//        printList(head);
//
//        deleteFirstNode(&head);
//
//    }
//
//    printf("\nmenghapus node posis awal\n");
//    printf("Isi dari SLL: \nKosong");
//
//    return 0;
//}
