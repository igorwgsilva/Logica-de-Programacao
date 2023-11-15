#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int tamanho) {
    int i, j, pos;

    for (i = 0; i < tamanho - 1; i++) {
        pos = i;

        for (j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[pos]) {
                pos = j;
            }
        }

        if (pos != i) {
            trocar(&arr[i], &arr[pos]);
        }
    }
}

int main(void) {
    int v[20] = {20, 19, 18, 17, 16, 10, 14, 13, 12, 11, 10, 9, 8, -7, 6, 5, 4, 3, 2, 1};
    int i;

    selectionSort(v, 20);

    for (i = 0; i < 20; i++) {
        printf("\nv[%d] = %d", i, v[i]);
    }

    return 0;
}
