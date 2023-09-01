#include<stdio.h>
#include<stdlib.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int division(int, int);

int main() {
    int num1, num2, option;
    num1=num2=option=0;
    printf("Arithmetic Operation\n");
    printf("-------------------------\n");
    printf("Enter two integers: \n");
    scanf("%i", &num1);
    scanf("%i", &num2);
    printf("Enter your any one option 1 to 4: \n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%i", &option); 
    int result = 0;
  switch(option) {
case 1:
result = add(num1, num2);
break;
case 2:
result = sub(num1, num2);
break;
case 3:
result = mul(num1, num2);
break;
case 4:
result = mul(num1, num2);
break;
default:
printf("Please enter number between 1 to 4.\n");
}

if(result>0 && result <=4) {
    printf("Result: %i\n", result);
}
  return 0; 
}


int add(int x, int y) {
return (x+y);
}

int sub(int x, int y) {
return (x-y);
}

int mul(int x, int y) {
return (x*y);
}

int division(int x, int y) {
return (x/y);
}