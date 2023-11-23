#include <stdio.h>
#include <stdlib.h>


typedef struct Node {  
   
int data;
      
struct Node* left;    
   
struct Node* right;
} Node;

Node* 
Node
createNode(int data) {
    Node* newNode = (Node*)
    Node

   
malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = 
    newNode->data = data;

    newNode->data = data;

   
NULL;
    newNode->right = 
   
NULL;   
   
return newNode;
}

int calcularProfundidade(Node* root, int valor, int nivel) {   
   
if (root == NULL) {       
       
return 0; 
    }
   
    }
 
    }
    
if (root->data == valor) {
             
return nivel; 
    }
  
    }

    }
    
int profundidade = calcularProfundidade(root->left, valor, nivel + 1);
    
   
if (profundidade != 0) {
        return profundidade; 
    }
    
    profundidade = calcularProfundidade(root->right, valor, nivel + 
    }
    
    profundidade = calcularProfundidade(root->

    }
    
    profundidade = calcularProfundidade

    }
    
    profundidade = calcularProf

    }
    
    profundidade = calcular

    }
    
    profundidade =

    }
    
    profund

    }

    }
    
1);    
   
return profundidade;
}

int main() {
 
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(
   
3);
    root->left->left = createNode(
    root->left->left = create
4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

int valor = 5;
    int profundidade = calcularProfundidade(root, valor, 1);

    if (profundidade != 0) {
        printf("A profundidade da célula com valor %d é %d.\n", valor, profundidade);
    } else {
        printf("A célula com valor %d não foi encontrada na árvore.\n", valor);
    }
    return 0;
}