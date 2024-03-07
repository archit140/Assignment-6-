#include<stdio.h>
int main()
{
    int n, m;

    printf("Enter the size of first array: ");
    scanf("%d",&n);
    printf("Enter the size of second array: ");
    scanf("%d",&m);
    int arr1[n], arr2[m];

    printf("Enter the numbers in first array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the numbers in second array: ");
    for(int j = 0; j < m; j++) {
        scanf("%d", &arr2[j]);
    }

   
    int isSubset = 1;

    
    for(int i = 0; i < m; i++) {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        
        if(found == 0) {
            isSubset = 0;
            break;
        }
    }

    if(isSubset == 1)
        printf("arr2[] is a subset of arr1[]\n");
    else
        printf("arr2[] is not a subset of arr1[]\n");

    return 0;
}
