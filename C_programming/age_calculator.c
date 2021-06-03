#include<stdio.h>
#include<math.h>
int main()
{
int date,month,year,age,m,d,y;
int t=2019;
int r=9;
int o=8;
printf("enter your date ");
scanf("%d",&date);
printf("enter your month ");
scanf("%d",&month);
printf("enter your year ");
scanf("%d",&year);
y=t-year;
  if(month>r)
   {
   y=--y;
   m=month-r;
       
   }
  else
    m=r-month;
if(date>o)
   {
    m= m--;
    d=date-o; 

   }
 else
    d=o-date;
  printf("your age is %d years,%d months,%d days",y,m,d);
return 0;
}
  
