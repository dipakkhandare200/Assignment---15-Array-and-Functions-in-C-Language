//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
#include <math.h>
int smalltest_number(int a[],int n)
{
    int small=a[0];
   for(int i=1;i<n;i++)
  {
    if(small>a[i])
    {
     small=a[i];
    }

  }return small;
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
 printf("Smallest number from Enter number is = %d",smalltest_number(a,num));
}


