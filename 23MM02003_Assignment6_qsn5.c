#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    
    printf("Transposed matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
