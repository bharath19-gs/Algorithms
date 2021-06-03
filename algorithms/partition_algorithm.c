/*constraints
1.A number shouldnot be compared more than once.
2.Have to use only two arrays in the whole program.
3.use only one array in the whole program.
4.do not swap a number more than o(1-2 exceptions allowed)*/
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
  int val = a.ar_1[0],i=1,temp,N=a.n,a_=0,j=N-1;
 	while(val>a.ar_1[i] && i<N)
  { 
    i++;
  }
  while(val<a.ar_1[j])	 
    {
		 j--;
    }
  while(i<j)//here the partition takes place......
	{
		{
		temp=a.ar_1[j];
	  	a.ar_1[j]=a.ar_1[i];
	  	a.ar_1[i]=temp;	  	
 		}
   while(val>a.ar_1[i])
  { 
    i++;
  }
  while(val<a.ar_1[j])	 
    {
		 j--;
    } 	
 }
  if(val >= a.ar_1[i-1])  	
   {
     temp=a.ar_1[0];
     a.ar_1[0]=a.ar_1[i-1];
     a.ar_1[i-1]=temp;
   }
  printf("THE POSITION OF THE PIVOT IS %d ",i-1);//printing the position of the value in the new array 
  return a;
} 
void output(struct values a)
{
 for (int o = 0; o < a.n; o++)//printing the new array
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
