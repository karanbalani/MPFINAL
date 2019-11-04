#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,res;
printf("ENTER THE FIRST NUMBER : ");
scanf("%d",&a);
printf("ENTER THE SECOND NUMBER : ");
scanf("%d",&b);

asm mov ax,a
asm mov bx,b

back:
asm cmp ax,bx
asm jnz back1
asm mov res,bx
jmp exit

back1:
asm cmp ax,bx
asm jc back2
asm sub ax,bx
asm jmp back

back2:
asm sub bx,ax
asm jmp back

printf("THE GCD OF TWO NUMBERS IS : %d",res);

int lcm;
lcm = (a*b)/res;
printf("THE LCM OF TWO NUMBERS IS : %d",lcm);
}

