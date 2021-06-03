 #include<stdio.h>
#include<string.h>
#include<math.h>
struct sentence
{
	int n;
	char ln[100];
};
/*   the input of the string id taken here and stored into the structure sentence creates..    
*/
struct sentence input()
{
	struct sentence a;
	printf("enter the character string each character wise with out space\n");
	gets(a.ln);
	a.n=strlen(a.ln);
	return a;
}
/*   this function proints the palindrome existing in the given string with the postion where the string beging's..    
*/
void print_palindrome(int flag,int i,int j,struct sentence a)
{
	if(flag==0 && abs(j-i)>=2)
	{	
		printf("%d\t",i+1);
		{
			for(int o=i;o<=j;o++)
			{
			putchar(a.ln[o]);
			}
		}
		printf("\n");
	}

}
/*   here the string is thoroughly checked for palindromes present in the inputed string...    
*/
void check_sub_palindromes(struct sentence a)
{
	int flag=0;
	int j=0,i=0;
	int l=0;
	int k=a.n;
	for(l=0;l<a.n;l++)
	{	
		for(k=a.n-1;k>l;k--)
		{	
			flag=0;
			i=l;
			j=k;
			while(i<j)
			{
				if(a.ln[i] != 	a.ln[j])
				{
					flag++;
					break;
				}
				i++;
				j--;
			}
			print_palindrome(flag,l,k,a);
		}
	}	
}
/*  this is the main function first the input function is called and stored into a structure and then the check_sub_palindrome is done 
    then the sub palindeome is printed on the console with the postion where it is starting with.
*/
int main()
{
	struct sentence a;
	int flag;
	a=input();
	check_sub_palindromes(a);
	return 0;
}
