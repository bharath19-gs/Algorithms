#include<stdio.h>

int compute(int*a, int*b);
void get_values(int*a,int*b);


void output(int a,int b)
{
printf("after swapping (%d,%d)",a,b);
}

void get_values( int*a,int*b)
{   
    printf("enter x,y");
    scanf("%d %d",a,b);
   
}

int swap(int*a, int*b)
{ 
  int t;
  t=*a;
  *a=*b;
  *b=t;
}

int main()
{
    int x,y;
    get_values(&x,&y);
    swap(&x,&y);
    output(x,y);
	return 0;
}
