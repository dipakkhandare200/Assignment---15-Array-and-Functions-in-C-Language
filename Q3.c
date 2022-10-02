 //3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
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
 printf("Enter number is = %d",sorting_number(a,num));
}
int sorting_number(int a[],int n)
  { int j;
     for(int i=0;i<n;i++)
        {
         for(int j=i+1;j<n;j++)
         {
           if(a[j]<a[i])
           {
             int tmp=a[i];
              a[i]=a[j];
              a[j]=tmp;
              }
           }
         }
           for(int i=0;i<10;i++)
           {
	    printf(" \n  %d",a[i]);

	    }
	    printf("\n");

return a[j];

}
