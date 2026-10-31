#include<stdio.h>
int main(){
    int a,b;
    char operator;
    printf("enter two numbers");
    scanf("%d %d", &a,&b);
    printf("enter operator");
    scanf(" %c", &operator);
    switch(operator)
    {
        case '+':
            printf("addition = %d" ,a+b);
            break;
        case '-':
        printf("subtraction = %d" ,a-b);
        break;
        case '*':
        printf("multiplication = %d" ,a*b);
        break;
        case '/':
        if(b != 0)
        {
        printf("division = %d" ,a/b);
           }
       else
       { 
        printf("not defined");
       }
        break;
    }
    return 0;

}