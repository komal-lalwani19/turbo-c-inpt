#include<stdio.h>
#include<conio.h>
int main()
{
int a=5,b=3,c;
clrscr();
c=a&b;
printf("bitwise &%d \n",c);
c=a|b;
printf("bitwise !! %d \n",c);
c=a<<2;
printf("shift left: %d \n",c);
c=a>>2;
printf("shift right: %d\n",c);
return 0;
}
