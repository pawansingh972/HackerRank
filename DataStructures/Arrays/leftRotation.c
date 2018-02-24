#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* leftRotation(int a_size, int* a, int d, int *result_size) {
    // Complete this function
    int *tempArr = (int *)malloc(d * sizeof(int));
    int j = 0;
    for(int i = 0; i < d; i++) {
        *(tempArr + i) = *(a + i);
    }
    for(int i = 0, j = d; j < a_size; i++, j++) {
        *(a + i) = *(a + j);
    }

    j = a_size - d;
    for(int i = 0; i < d; i++) {
        *(a + j) = *(tempArr + i);
        j++;
    }

    *result_size = a_size;
    return a;
}

int main() {
    int n;
    int d;
    scanf("%i %i", &n, &d);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int result_size;
    int* result = leftRotation(n, a, d, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    return 0;
}
