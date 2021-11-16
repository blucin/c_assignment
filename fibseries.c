#include<stdio.h>
#include<conio.h>

int n1,n2,n3;

int main () {
    int i,input;

    printf("Enter the amount of n you want in the series: ");
    scanf("%d",&input); 

    //print 0 and 1 
    printf("\n0 \n1");

    //initially
    n1 = 0;
    n2 = 1;

    for (i=2;i<input;i++) {
        n3 = n1 + n2;
        printf("\n%d",n3);
        //update the values before they leave the loop
        n1 = n2;
        n2 = n3;
    }

    return 0;
}