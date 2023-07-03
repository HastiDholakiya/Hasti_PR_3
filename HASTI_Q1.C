//write a program to print all alphabets from a to z by skipping 3 alphabets using do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
char a='a';
char z='z';
clrscr();
do{
 printf("%c\n",a);
 a+=4;
}while(a<=z);
getch();
}


/*
a
e
i
m
q
u
y
*/