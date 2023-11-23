#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    
   
int data;
    struct Node* next;
} Node;

int verificaOrdemCrescente(Node* head) {
    Node* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->data > current->next->data) {
            
           
return 0; 
        }
        current = current->next;
    }

    return 1; 
}

void printList(Node* head) {
    Node* current = head;

    printf("Lista: ");
    while (current != NULL) {
        
       
printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


int main() {
    
    Node* head = (Node*)
    Node*
malloc(sizeof(Node));
    Node* second = (Node*)
    Node* second = (
malloc(sizeof(Node));
    Node* third = (Node*)malloc(sizeof(Node));
    Node* fourth = (Node*)malloc(sizeof(Node));

    head->data = 1;
    head->next = second;
    second->data = 
    head->next = second;
   
2;
    second->next = third;
    third->data = 
    second->next
3;
    third->next = fourth;
    fourth->data = 
    third->next = fourth;
   
4;
    fourth->next = NULL;

    printList(head); 

    int ordemCrescente = verificaOrdemCrescente(head);

if (ordemCrescente) {
        printf("A lista está em ordem crescente.\n");
    } else {
        printf("A lista não está em ordem crescente.\n");
    }
    Node* current = head;
    Node* nextNode;
    
    Node* current = head;
    Node* nextNode;
   
while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}
