//write a program to find the sum of a first and the last digit of a number.

#include<stdio.h>
#include<conio.h>

void main(){
int n;
int sum=0;
int firstdigit,lastdigit;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);

lastdigit= n%10;

while(n>=10){
     n=n/10;
     }

firstdigit=n;

sum= firstdigit+lastdigit;

printf("Sum of first and last digit: %d",sum);

getch();
}

/* Enter any number: 1047
Sum of first and last digit: 8
*/