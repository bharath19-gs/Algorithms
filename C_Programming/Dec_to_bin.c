#include<stdio.h>
struct store
{
    int ar[100];
    int s;
    
};


int input()
{
    int a;
    printf("enter the decimal val\n");
    scanf("%d",&a);
    return a;
}


struct store process(int a)
{
    struct store s1;
    int i=0; 
    do
    {
        s1.ar[i]=a%2;
        a=a/2;
        i++;
    }while(a>=1);
    s1.s=i;
    return s1;
}


int main()
{
 int a=input();
 struct store s1=process(a);
 for(int i=0;i<(s1.s);i++)
 {
     printf("%d",s1.ar[i]);
 }
return 0; 
}
