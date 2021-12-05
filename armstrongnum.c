#include<stdio.h>
#include<stdlib.h>

int main () {
  char input [2];

  printf("Enter your number: ");
  scanf("%s",input);

  //convert whole string to int num
  int num = atoi(input);

  //convert individual ASCII char to int value
  int digit1 = input[0] - '0';
  int digit2 = input[1] - '0';
  int digit3 = input[2] - '0';

  int multi = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;

    if (multi==num) {
        printf("\nGiven number is an armstrong number");
    } else {
        printf("\nGiven number is not an armstrong number");
    }

return 0;
}