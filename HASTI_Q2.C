//write a program to count the total number of digits in a number.

#include<stdio.h>
#include<conio.h>

void main(){
int n;
int i=0;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);
do{
  n/=10;
  i++;
 }while(n!=0);
   printf("Number of digit: %d",i);

getch();
}
/*
Enter any number: 1309
Nymber of digit: 4
*/