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

    

    return 0;
}