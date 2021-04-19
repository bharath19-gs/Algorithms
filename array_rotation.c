#include<stdio.h>



void dataEntry(int *n)
{
	printf("Enter the size of the array:\n");
	scanf("%d",n);
}

void array_rotation(int array[],int n)
{
 int temp;
 for(int i=0;i<n-1;i++)
 {
  temp = array[i];
  array[i] = array[i+1];
  array[i+1] = temp;
 }
 for(int i=0; i<n;i++)
 {
 printf("%d\t",array[i]);
 }
}

int main()
{
 int n;
 dataEntry(&n);
 printf("Enter the array\n");
 int array[n];
 for(int i = 0;i<n;i++)
 {
  scanf("%d",&array[i]);
 }
 printf("Rotated array\n");
 array_rotation(array,n);
 
}
