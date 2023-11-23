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
    Node*

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

int calcularAltura(Node* root, int valor) {
    
   
if (root == NULL) {
        return 0; 
    }
       
    }
       
if (root->data == valor) {
        return 1 + maximo(calcularAltura(root->left, valor), calcularAltura(root->right, valor));
    }
    
    return maximo(calcularAltura(root->left, valor), calcularAltura(root->right, valor));
}

int maximo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(
   
3);
    root->left->left = createNode(
    root->
4);
    root->left->right = createNode(
    root->left->right =
5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    int valor = 2;
    int altura = calcularAltura(root, valor);

    if (altura != 0) {
        printf("A altura da célula com valor %d é %d.\n", valor, altura);
    } else {
              
printf("A célula com valor %d não foi encontrada na árvore.\n", valor);
    }
    return 0;
}
