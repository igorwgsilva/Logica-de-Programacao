#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
      
int data;
      
struct Node* next;
} Node;
}

Node* 
Node* copiar

Node*

Node
copiarListaRecursiva(Node* head) {       
if (head == NULL) {             
return NULL; 
    }
    Node* newNode = (Node*)
    }
    Node* newNode = (Node
    }
    Node* newNode = (
    }
    Node* newNode =
    }

    Node* newNode
    }
    Node
  }
}
malloc(sizeof(Node));
    newNode->data = head->data; 
    newNode->data = head->data
    newNode->data = head
    newNode->data =
    newNode->data
    newNode->
    newNode

    newNode->next = copiarListaRecursiva(head->next); 
    newNode->next = copiarListaRecursiva(head->next);
    newNode->next = copiar
    newNode->next = cop
    newNode->next
return newNode;
}

void printList(Node* head) {
    Node* current = head;

    
    Node* current = head;

   
printf("Lista: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
        current = current
printf("\n");
}

int main() {
    Node* head = (Node*)
    Node*
    Node
   
malloc(sizeof(Node));
    Node* second = (Node*)
    Node  
malloc(sizeof(Node));
    Node* third = (Node*)
    Node*
    Node

   
malloc(sizeof(Node));
    head->data = 
1;
    head->next = second;
    second->data = 
    head->next = second;
    head->next = second;
  
2;
    second->next = third;
    third->data = 
    second->next = third;
    second->next = third; 
3;
    third->next = 
   
NULL;
    printList(head); 
    printList
    print

    Node* copiaRecursiva = copiarListaRecursiva(head);

    printList(copiaRecursiva); 
    Node* copiaRecursiva = copiarListaRecursiva(head);
    printList(copiaReursiva)
    Node* copiaRecursiva = copiarListaRecursiva(head);
    printList(copiaRecursiva)
    Node* copiaRecursiva = copiarListaRecursiva
    Node* copiaRecursiva = cop
    Node* copiaRecursiva =
    Node* copiaRec
    Node* copia
    Node* cop
    Node
    Node* current = head;
    Node* nextNode;
    
    Node* current = head;
    Node* nextNode;
   

    Node* current = head;
    Node* nextNode;

    Node* current = head

   
while (current != NULL) {
        nextNode = current->next;
        
        nextNode = current->next;

        nextNode = current->

        nextNode = current

       
free(current);
        current = nextNode;
    }

    current = copiaRecursiva;
    
        current = nextNode;
    }

    current = copiaRecursiva;
   

        current = nextNode;
    }

    current = copiaRecursiva;

        current = nextNode;
    }

    current = copiaRecurs

        current = nextNode;
    }

    current =

        current = nextNode;
    }

   

        current = nextNode;
    }


        current = nextNode;
   

        current = nextNode;

        current =

        current
while (current != NULL) {
        nextNode = current->next;
        
        nextNode = current->next;

        nextNode
free(current);
        current = nextNode;
    }

    
        current = nextNode;
    }


        current = nextNode;
   

        current = next

       
return 0;
}