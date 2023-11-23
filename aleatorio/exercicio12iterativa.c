#include <stdio.h>
#include <stdlib.h>


typedef struct Node {    
   
int data;
   
struct Node* next;
} Node;


} Node

Node* 
Node* copiarLista
copiarListaIterativa(Node* head) {
    
   
if (head == NULL) {
        return NULL; 
    }

    Node* current = head; 
    }

    Node* current = head

    }

    Node* newHead = 
    Node*
NULL; 
    Node* tail = NULL; 

    while (current != NULL) {
        Node* newNode = (Node*)
        Node* newNode = (Node*)

        Node* newNode = (Node

        Node* newNode = (

        Node* newNode
malloc(sizeof(Node)); 
        newNode->data = current->data; 
        newNode->data = current->data

        newNode->data = current->

        newNode->data = current

        newNode->data

        newNode

        newNode->next = 
       
NULL;

if (newHead == NULL) {
            newHead = newNode; 
            newHead = newNode;

            newHead = newNode

            newHead

            new
            tail = newNode; 
            tail = newNode

            tail

        } 
       
else {
            tail->next = newNode; 
            tail->next = newNode;

            tail->next =

            tail

            tail = tail->next; 
            tail = tail->next
        }
        current = current->next; 
        }
        current = current->next;
        }
        current = current->next
        }
        current = current
        }
        current
        }   

        }
    }  
    }
    }
return newHead; 
}

void printList(Node* head) {
    Node* current = head;

    
    Node* current = head;

   

    Node* current = head;

printf("Lista: ");
    
   
while (current != NULL) {
        
       
printf("%d ", current->data);
        current = current->next;
    } 
        current = current->next;
    }
        current = current->next;
    }

        current = current->next;
   
        current = current->next;
       
printf("\n");
}

int main() {
    
    Node* head = (Node*)
    Node

   
malloc(sizeof(Node));
    Node* second = (Node*)
    Node*

    Node
   
malloc(sizeof(Node));
    Node* third = (Node*)
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

    print

    Node* copiaIterativa = copiarListaIterativa(head);

    printList(copiaIterativa); 
    Node* copiaIterativa = copiarListaIterativa(head);

    printList(copiaIterativa);

    Node* copiaIterativa = copiarListaIterativa(head);

    printList(copiaIterativa

    Node* copiaIterativa = copiarListaIterativa(head);

    printList

    Node* copiaIterativa = copiarListaIterativa(head);

    print

    Node* copiaIterativa = copiarListaIterativa(head);

   

    Node* copiaIterativa = copiarListaIterativa(head);


    Node* copia

    Node* cop

    Node

    Node* current = head;
    Node* nextNode;
    
    Node* current = head;
    Node* nextNode;
   

    Node* current = head;
    Node* nextNode;

    Node* current = head;
   
    Node* current = head;  
while (current != NULL) {
        nextNode = current->next;
        
        nextNode = current->next;
       
        nextNode = current->next;      
free(current);
        current = nextNode;
    }

    current = copiaIterativa;
    
        current = nextNode;
    }

    current = copiaIterativa;
   

        current = nextNode;
    }

    current = copiaIterativa;

        current = nextNode;
    }
    current = nextNode;
    }

while (current != NULL) {
        nextNode = current->next;
        
        nextNode = current->next;
       

        nextNode = current->next;
free(current);
        current = nextNode;
    }

    
        current = nextNode;
    }
         current = nextNode;
    }
        current = nextNode;
        current = nextNode; 
return 0;
}