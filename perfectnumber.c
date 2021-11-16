#include<stdio.h>
#include<conio.h>

void finddiv(int n) {
    //divisor is always less than or equal to given input
    for(int i;i<=n;i++) {
        if(n%10==0) {
            printf("%d",&i);
        }
    }
}

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    finddiv(6);
    return 0;
}
