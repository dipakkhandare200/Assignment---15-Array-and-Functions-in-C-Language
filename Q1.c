//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
#include <math.h>
int greatest_number(int a[],int n)
{
    int large=a[0];
   for(int i=1;i<n;i++)
  {
    if(large<a[i])
    {
     large=a[i];
    }

  }return large;
}
int main()
{
  int num,i;
  printf("\n Enter the Array size = \n");
  scanf("%d",&num);
  int a[num];
  printf("\n Enter the element of Array \n");
  for(int i=0;i<num;i++)
  {
       printf("%d= ",i);
      scanf("%d",&a[i]);
  }
 printf("Greatest number from Enter number is = %d",greatest_number(a,num));
}


