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
//void deleteLastNode(struct Node** head) {
//    if (*head == NULL) return;
//    if ((*head)->next == NULL) { // Jika hanya ada satu node
//        free(*head);
//        *head = NULL;
//        return;
//    }
//
//    struct Node* second_last = *head;
//    while (second_last->next->next != NULL) {
//        second_last = second_last->next;
//    }
//    free(second_last->next);
//    second_last->next = NULL;
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
//int akhir() {
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
//        printf("\nMenghapus node posisi akhir\n");
//        printf("Isi dari SLL:\n");
//        printList(head);
//
//        deleteLastNode(&head);
//
//    }
//
//    printf("\nMenghapus node posisi akhir\n");
//    printf("Isi dari SLL: \nKosong");
//
//    return 0;
//}
