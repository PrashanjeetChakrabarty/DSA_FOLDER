/*WRITE A PROGRAM TO DELETE AN ELEMENT FROM AN ARRAY ABC*/

#include <stdio.h>

int main() {
    int n, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int ABC[n];
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &ABC[i]);
    }
    
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &position);
    
    if(position < 1 || position > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
    } else {
        for(i = position - 1; i < n - 1; i++) {
            ABC[i] = ABC[i + 1];
        }
        
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", ABC[i]);
        }
        printf("\n");
    }
    
    return 0;
}
