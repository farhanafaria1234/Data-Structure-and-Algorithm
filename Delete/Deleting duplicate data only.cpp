#include <stdio.h>

int main() {
    int A[50] = {7, 4, 2, 4, 2, 4, 4, 2};
    int N = 8;
    int i, j, k;

    for(i = 0; i < N; i++) {
        for(j = i + 1; j < N; j++) {
            if(A[i] == A[j]) {

                for(k = j; k < N - 1; k++)
                    A[k] = A[k + 1];

                N--;
                j--;
            }
        }
    }

    printf("Final array (first kept, others deleted):\n");
    for(i = 0; i < N; i++)
        printf("%d ", A[i]);

    return 0;
}

