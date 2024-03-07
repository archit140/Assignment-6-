#include <stdio.h>

void print_greater_than_average(int arr[], int size, int average) {
    printf("Elements greater than the average (%d) are: ", average);
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int average = sum / n;
    printf("Average of the numbers is %d\n", average);

    print_greater_than_average(arr, n, average);

    return 0;
}
