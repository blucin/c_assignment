#include<stdio.h>
#include<conio.h>

int main () {
    int n,rem,reverse;

    //initial reverse value
    reverse = 0;

    printf("Enter the value of your number: ");
    scanf("%d",&n);
    printf("\nOrginial number was: %d",n);

    //save original number before while loop
    int ognum = n;

    while (n!=0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n/10;
    }
    
    printf("\nReversed number is: %d",reverse);
    printf("\nOrginial number was: %d",n);