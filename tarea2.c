#include <stdio.h>

int main() {
    int n,i;
    printf("ingrese el numero de elementos del vector\n");
    scanf ("%d", &n);

    int A[n];
    for (i=0; i<n; i++){
        printf ("\n ingrese los elementos del vector\n");
        scanf ("%d", &A[i]);
    }
    for (i=0;i<n; i++){
    printf("%d", A[i]);
    }
    return 0;

}