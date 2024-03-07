#include <stdio.h>

#define MAX_CITIES 20
#define NUM_DAYS 7


void inputTemperatures(int arr[][NUM_DAYS], int num_cities) {
    for (int i = 0; i < num_cities; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            printf("Temperature of city %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

int main() {
    int arr[MAX_CITIES][NUM_DAYS];
    int num_cities;

    printf("Enter number of cities: ");
    scanf("%d", &num_cities);

    if (num_cities <= 0 || num_cities > MAX_CITIES) {
        printf("Invalid number of cities.\n");
        return 1; 

    
    inputTemperatures(arr, num_cities);

    
    for (int i = 0; i < num_cities; i++) {
        float sum = 0;
        for (int j = 0; j < NUM_DAYS; j++) {
            sum += arr[i][j];
        }
        float avg = sum / NUM_DAYS;
        printf("Average temperature of city %d: %.2f\n", i + 1, avg);
    }

    return 0;
}
}
