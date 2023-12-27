#include<stdio.h>
#include"../Includes/addition.h"
#include"../Includes/division.h"
#include"../Includes/modulus.h"
#include"../Includes/multiplication.h"
#include"../Includes/substraction.h"
int main(void)
{
int x=10;
int y=5;
printf("\n**********\n");
printf("X=10\n");
printf("Y=5\n");

printf("X+Y=%d\n",add(x,y));
printf("X-Y=%d\n",sub(x,y));
printf("X*Y=%d\n",mult(x,y));
printf("X/Y=%d\n",div(x,y));
printf("X modulus Y=%d\n",mod(x,y));
printf("\n**********\n");
return 0;
}
