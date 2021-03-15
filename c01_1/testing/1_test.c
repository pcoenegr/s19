#include <stdio.h>
#include "ft_ultimate_ft.c"
int main ()
{
  int x;
  int *ptr1=NULL;
  int **ptr2=NULL;
  int ***ptr3=NULL;
  int ****ptr4=NULL;
  int *****ptr5=NULL;
  int ******ptr6=NULL;
  int *******ptr7=NULL;
  int ********ptr8=NULL;
  int *********ptr9=NULL;
  x=777;
 
  ptr1 =&x;  
  ptr2 =&ptr1;
  ptr3 =&ptr2;
  ptr4 =&ptr3;
  ptr5 =&ptr4;
  ptr6 =&ptr5;
  ptr7 =&ptr6;
  ptr8 =&ptr7;
  ptr9 =&ptr8;
 
  ft_ultimate_ft(ptr9);
  printf("%d",x);
  return (0);
}

