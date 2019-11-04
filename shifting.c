#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,temp1,temp2;
clrscr();
printf("ENTER THE NUMBER : ");
scanf("%d",&a);
printf("ENTER THE NUMBER OF BITS FOR SHIFTING : ");
scanf("%d",&b);

asm mov ax,a
asm mov bx,a
asm mov cx,b

asm shl ax,cl
asm shr bx,cl

asm mov temp1,ax
asm mov temp2,bx

printf("THE RESULT AFTER SHIFTING LEFT IS : %d",temp1);
printf("THE RESULT AFTER SHIFTING RIGHT IS : %d",temp2);

getch();

}

