#include <stdio.h>

void main (int argc,char *argv[]) {
      
 int i1=-1;
 int i2=4294967295;
 int i3=-2147483648;
 
 printf("Value passed : d\n");
 printf("the value of i1 is  : %d\n",i1);
 printf("the value of i2 is  : %d\n",i2); 
 printf("the value of i3 is  : %d\n\n",i3);

 printf("Value passed : x\n");
 printf("the value of i1 is  : %x\n",i1);
 printf("the value of i2 is  : %x\n",i2);
 printf("the value of i3 is  : %d\n\n",i3);

 printf("Value passed : u\n");
 printf("the value of i1 is  : %u\n",i1);
 printf("the value of i2 is  : %u\n",i2);
 printf("the value of i3 is  : %d\n\n",i3);

 }