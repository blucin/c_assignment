#include<stdio.h>


int main()
{
    float a,b,add,sub,multi,div;
    char n;

    printf("hello this is a program to perform simple calculations\n");

    printf("enter number 1\n");
    scanf("%f",&a);
    
    printf("enter number 2\n");
    scanf("%f",&b);
    
    printf("enter the operator as;\t+ for add\t- for sub\t* for multi\t/ for div\n");
    scanf("%c",&n);
       n=getchar();

    if (n=='+')
    {
        add=a+b;
        printf("addition is = %f",add);
    }
    else if (n=='-')
     {  
        sub=a-b;
        printf("subtraction is = %f",sub);
     }
    else if (n=='*')
     {   
        multi=a*b;
        printf("multiplication is = %f",multi);
     }
    else if (n=='/')
     {  
        div=a/b;
        printf("division is = %f",div);
     }
     else 
     {
         printf("\nI CANNOT UNDERSTAND THE INPUT FROM you");
     }  
    return 0;
}
