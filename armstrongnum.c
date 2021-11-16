#include <stdio.h>
#include <conio.h>
#include <math.h>

int firstDigit(int p) {
    while(p >= 10)
    {
        p = p / 10;
    }
}

int middleDigit(int q) {
    // Find total number of digits
    int digits = (int)log10(q) + 1;
    // Find middle digit
    q = (int)(q / pow(10, digits / 2))
        % 10;
    // Return middle digit
    return q;
}

int lastDigit(int r) {
    //find last digit and update given input value
    r = r % 10;
    return r;
}

int main() 
{ 
    int num,digit1,digit2,digit3,multi;
    
    printf("Enter the value:  ");
    scanf("%d",&num);

    digit1 = firstDigit(num);
    digit2 = middleDigit(num);
    digit3 = lastDigit(num);

    printf("\ndigit1= %d",digit1);
    printf("\ndigit2= %d",digit2);
    printf("\ndigit3= %d",digit3);
    
    multi = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;
    printf("\nmulti is %d",multi);

    if (multi==num) {
        printf("\nGiven number is an armstrong number");
    } else {
        printf("\nGiven number is not an armstrong number");
    }
}