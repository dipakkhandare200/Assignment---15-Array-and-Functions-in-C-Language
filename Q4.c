//4. Write a function to rotate an array by n position in d direction. The d is an indicative
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

 #include <stdio.h>
void leftRotateByOne(int arr[], int n)
{
	int first = arr[0];
	for (int i = 0; i < n - 1; i++) {
		arr[i] = arr[i + 1];
	}

	arr[n-1] = first;
}
void leftRotate(int arr[], int r, int n)
{
    	if (r < 0 || r >= n) {
		return;
	}

	for (int i = 0; i < r; i++) {
		leftRotateByOne(arr, n);
	}
}

int main(void)
{
	int arr[100],size,r;
	printf("Enter the size of the array =");
	scanf("%d",&size);
	arr[size];
	printf("\nHow many times rotate the array = \n");
    scanf("%d",&r);
    printf("Enter the element of the array \n");
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<size;i++)
   scanf("%d",&arr[i]);
   leftRotate(arr, r,n);
    for (int i = 0; i < n; i++)
        {
		printf("%d ", arr[i]);
	}

}
