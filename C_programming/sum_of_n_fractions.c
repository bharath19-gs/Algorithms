    #include <stdio.h>
    int find_gcd(int a,int b);
    struct fraction
    {
        int nr;
        int dr;
        
    };
    struct fraction compute(int n,struct fraction ar[n]);
    void input(int n,struct fraction ar[n])
    {
        int i;
        for(int i=0;i<n;i++)
        {
            printf("enter the fractions to be added");
          scanf("%d/%d",&ar[i].nr,&ar[i].dr);
        }
        
        
    }
    struct fraction compute(int n,struct fraction ar[n])
    {    
        struct fraction ret;
        int i, x=0,y=1,t,gcd;
        for(int i=0;i<n;i++)
        {
            y*= ar[i].dr;
        } 
        for(int i=0;i<n;i++)
        {
            t=1;
            for(int i=0;i<n;i++)
            {   
              t*=ar[i].dr; 
            }
            t=t/ar[i].dr;
            x+=ar[i].nr*t;  
        }
        gcd = find_gcd(x,y);
        ret.nr= x/= gcd;
        ret.dr= y/= gcd;
        return ret;
    }
    int find_gcd(int a,int b)
    {
        int gcd,i=1,n,d;
        for(int i=1;i<=a && i<=b;i++)
         if(a%i==0 && b%i==0)
          gcd=i;
         else 
          continue;
        return gcd;
        
    } 
    void output( int n, struct fraction f[n],struct fraction sum)
     { 
         for(int i=0;i<n;i++)
         {
         printf("%d/%d",f[i].nr,f[i].dr);
         if(i==n-1)
         {
             printf(" ");
             
         }
         else 
         {
             printf("+");
         }
         }
          printf("= %d/%d",sum.nr,sum.dr);
    }
     
    int main()
    {
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    struct fraction sum ;
    struct fraction f[n];
    input(n,f);
    sum =compute(n,f);
    output(n,f,sum); 
    
 
    return 0;
    }
    
