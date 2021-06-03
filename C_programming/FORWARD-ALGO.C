#include<stdio.h>
struct values
{
  int n;
  int ar_1[100];
};
struct values input ()
{
  struct values a;
  printf("enter the number of terms being entered\n");
  scanf("%d",&a.n);
  printf("enter the values into the array\n");
  for(int i=0;i < a.n;i++)
  {
    scanf("%d",&a.ar_1[i]);
  }
  return a;
}
struct values partition(struct values a)
{ 
  int val = a.ar_1[0];
  int count_small=0;
  int count_large=0;
  for (int i = 1; i < a.n; i++)
    {
      if (val >= a.ar_1[i])//the numbers less and equal to value are being saved to the array ar_2//
	{
	  int temp=0;
	  count_small++;
	  temp=a.ar_1[i];
	  a.ar_1[i]=a.ar_1[count_small];
	  a.ar_1[count_small]=temp;
	  
     	}
     	
     }
    if(i==a.n-1)
     	{
        	if(val >= a.ar_1[count_small])
        	{
        	  int temp=0;
	          temp=a.ar_1[0];
	          a.ar_1[0]=a.ar_1[count_small];
	          a.ar_1[count_small]=temp;
     	        } 	  
        }
  int pos= count_small;
  printf("the position of the value is %d\n",pos);//printing the position of the value in the new array//
  a.ar_1[pos] = val; 
  return a;
} 
void output(struct values a)
{
 for (int o = 0; o < a.n; o++)//printing the new array//
    {
      printf ("%d\t", a.ar_1[o]);
    }
}
int main (void)
{
  struct values a,b;
  a = input();
  b=partition(a);
  output(b);
}
