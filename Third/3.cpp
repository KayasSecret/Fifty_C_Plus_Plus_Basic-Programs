// Sum of Array

#include<stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the element of array : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("This is the array : \n");
    for(i=0; i<n; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\nThis is the total of elements : %d", sum);

    return 0;
}
