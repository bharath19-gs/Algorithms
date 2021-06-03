
/* 
	1. Reduce the complexity, try not to transverse the array. Pro tip : Be clever!
	2. 1 -> 2 -> 3 == 2 -> 3 -> 1
	3. O(1)
	4. user input how many times to rotate!!
	5. 2 -> 4 -> 5 -> 7 == 4 -> 5 -> 7 -> 2 (Think madi)
*/



#include<stdio.h>



void dataEntry(int *n, int array[])
{
	printf("Enter the size of the array:\n");
	scanf("%d",n);
  printf("Enter the array\n");
  for(int i = 0;i<n;i++)
 	{
  	scanf("%d",&array[i]);
 	}
 
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
 printf("Rotated array\n");
 for(int i=0; i<n;i++)
 {
 printf("%d\t",array[i]);
 }
}

int main()
{
 int n;
 int array[];
 dataEntry(&n,array);
 array_rotation(array,n);
}
