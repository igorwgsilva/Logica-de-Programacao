#include <stdio.h>
#include <stdlib.h>

typedef struct Node {  
int data;   
struct Node* next;
} Node;

Node* 
busca(Node* head, int value) {
    Node* current = head;
while (current != NULL) {     
if (current->data == value) {          
return current; 
        }
        current = current->next;
    }

    
        }
        current = current->next;
    }

   

        }
        current = current->next;
    }


        }
        current = current->next;
   

        }
        current = current->

        }
        current = current

  }      
}

       
return NULL; 
}
Node* 
Node
removeElemento(Node* head, int value) {
    Node* current = head;
    Node* previous = 
    Node* current = head;
    Node* previous =

    Node* current = head;
    Node* previous

    Node* current

    Node*
NULL;
while (current != NULL) {
        if (current->data == value) {
                      
if (previous == NULL) {
                head = current->next; 
                head = current->next;

                head = current->next

                head = current

                head =

                head
            } else {
                previous->next = current->next; 
                previous->next = current->next

                previous->next = current->
            }
            
            }
           

            }
free(current);            
           
printf("Elemento removido com sucesso.\n");           
           
return head; 
        }
        previous = current;
        current = current->next;
    }

    
        }
        previous = current;
        current = current->next;
    }

   

        }
        previous = current;
        current = current->next;
    }


        }
        previous = current;
        current = current->next;

        }
        previous = current;
        current = current->next

        }
        previous = current;
       

        }
        previous = current;

        }
       

        }
printf("Elemento não encontrado na lista.\n");
   
return head; 
}
void printList(Node* head) {
    Node* current = head;   
    Node* current = head;  
    Node* current = head;
    Node* current = head
    Node* current =
    Node* current
    Node*
    Node
   
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

        current = current

        current =

        current
printf("\n");
}

int main() {
   
    Node* head = (Node*)
    Node* head = (Node
malloc(sizeof(Node));
    Node* second = (Node*)
    Node* second = (
malloc(sizeof(Node));
    Node* third = (Node*)
    Node* third = (Node*)
    Node* third =
    Node* third
malloc(sizeof(Node));
    Node* fourth = (Node*)
    Node* fourth = (
    Node*
malloc(sizeof(Node));
    head->data = 
    head->data =
    head->data
    head

1;
    head->next = second;
    second->data = 
    head->next = second;
    second->data =
    head->next = second;
    second->data
    head->next = second;
    head->next = second;
   
2;
    second->next = third;
    third->data = 
    second->next = third;
    second->next = third;
   
3;
    third->next = fourth;
    fourth->data = 
    third->next = fourth;
    fourth->data =
    third->next = fourth;   
    third->next = fourth;
    third->next =
   
4;
    fourth->next = 
    fourth->next
   
NULL;

    printList(head); 
    printList(head);
    printList(head
    print
int value = 3;
    Node* foundNode = busca(head, value); 
    Node* foundNode = busca(head,
    Node* foundNode = busca(head
    Node* foundNode =
    Node* found   
   
if (foundNode != NULL) {
        
       
printf("Elemento %d encontrado na lista.\n", value);
    } 
   
else {
        
       
printf("Elemento %d não encontrado na lista.\n", value);
    }

int removeValue = 2;
    head = removeElemento(head, removeValue); 
    head = removeElemento(head, remove
    head = removeElemento(head,
    head = removeElemento
    printList(head); 
    printList(head
    printList
    Node* current = head;
    Node* nextNode;
    Node* current = head;
    Node* nextNode;
    Node* current = head;
    Node* nextNode;
    Node* current = head;
    Node* nextNode
    Node* current = head;
    Node* next
    Node* current = head;
    Node*
    Node* current = head;
    Node
    Node* current = head;   
    Node* current = head;
    Node* current = head
    Node* current =
    Node* current
    Node*
    Node  
while (current != NULL) {
        nextNode = current->next;
        
        nextNode = current->next;
       

        nextNode = current->next;

        nextNode = current

        nextNode

        next

       
free(current);
        current = nextNode;
    }

    
        current = nextNode;
    }


        current = nextNode;
   

        current = nextNode

        current = next
return 0;