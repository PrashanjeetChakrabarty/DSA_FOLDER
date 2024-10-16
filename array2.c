/*WRITE A PROGRAM TO FIND THE SUM OF AN ARRAY ABC*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int ABC[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ABC[i]);
    }
    for(i = 0; i < n; i++) {
        sum += ABC[i];
    }
    printf("The sum of the array is: %d\n", sum);
    return 0;
}

    
