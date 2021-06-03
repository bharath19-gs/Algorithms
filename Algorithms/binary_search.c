#include<stdio.h>

void input(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int inpsrh()
{
    int n;
    scanf("%d",&n);
    return n;
}
int srch(int key,int n,int a[])
{
    int l=0,h=n-1;
    int m;
    int flag =0;
    while(l<=h)
    {
        m=(l+h)/2;
        if(key<a[m])
         h=m-1;
        else if(key>a[m])
          l=m+1;
        else
         break;
         
    
        
    }
    flag=m;
    return flag;
}
void output(int y)
{
    if(y==0)
   {  
     printf("the search was unsucessful\n");
     
   }
   else
    printf("the search was succesful");
}
int main()
{ 
    int n;
    printf("enter the number of terms being entered");
    scanf("%d",&n);
    int a[n];
    printf("enter the values in to the array\n");
    input(a,n);
    printf("please enter the number to be searched\n");
    int x= inpsrh();
    int y= srch(x,n,a);
    output(y);
    return 0;
    
}
