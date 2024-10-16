/*WRITE A PROGRAM TO INSERT A NUMBER 1-15 IN AN ARRAY ABC */

#include<stdio.h>
int main(){
    int ABC[15];
    int sum=0;
    for (int i=0;i<15;i++){
        ABC[i]=i+1;
    }
    for(int i=0;i<15;i++){
        sum+=ABC[i];
    }
    printf("the sum of the elements in array ABC is: %d",sum);
    return 0;
}