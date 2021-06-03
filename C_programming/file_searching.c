//Store given student details in a file and display it given student name.Using fprintf and fscanf.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date_of_birth
{
	int d;
	int m;
	int y;
};
typedef struct date_of_birth dob;
struct student 
{
	char nam[100];
	int rn;
	dob db;
	int std;
};
typedef struct student stu;
stu inputs(int g)
{
    stu z;
    printf("\n\nEnter the name of the student %d - ",g);
	scanf("%s",z.nam);
	printf("Enter the roll number of the student - ");
	scanf("%d",&z.rn);
	printf("Enter the date of birth of the student (dd mm yy) - ");
	scanf("%d %d %d",&z.db.d,&z.db.m,&z.db.y);
    printf("Enter the standard of the student - ");
	scanf("%d",&z.std);
	return z;
}
void inputf(char fn[])
{
    printf("Enter the name of the file - ");
    scanf("%s",fn);
}
int input()
{
	int h;
	printf("Enter the number of students - ");
	scanf("%d",&h);
	return h;
}
void file_write(int g,stu y,FILE *file)
{
	fprintf(file,"\n\n%d)Name - %s\n",g+1,y.nam);
	fprintf(file,"\tRoll no - %d\n",y.rn);
	fprintf(file,"\tStandard - %d\n",y.std);
	fprintf(file,"\tDate of birth - %d %d %d\n",y.db.d,y.db.m,y.db.y);
}
stu file_read(int z,stu x[],FILE *f)
{
	fscanf(f,"%s",x[z].nam);
	fscanf(f,"%d",&x[z].rn);
	fscanf(f,"%d",&x[z].std);
	fscanf(f,"%d %d %d",&x[z].db.d,&x[z].db.m,&x[z].db.y);
	return x[z];
}
void output(stu p)
{
    printf("\n\nThe student is found.\n*The name of the student - %s\n",p.nam);
    printf("*The roll number of the student - %d\n",p.rn);
    printf("*The standard of the student - %d\n",p.std);
    printf("*The date of birth of the student - %d/%d/%d\n",p.db.d,p.db.m,p.db.y);
}
void namesr(char sr[])
{
    printf("\nEnter the name of the student for the details - ");
    scanf("%s",sr);
}
stu findstu(FILE *fp,int n,stu x[])
{
    stu y;
    char srch[100];
    namesr(srch);
    for(int i=0;i<n;i++)
    {
        while(!feof(fp))
        {
            y=file_read(i,x,fp);
            if(strcmp(srch,y.nam)==0)
            {
                return y;
                break;
            }
        }
    }
    int i=0;
    if(strcmp(srch,x[i].nam)!=0)
    {
        printf("student does not exist");
    }
}
int main()
{
	int n=input();
	char fnme[100];
	inputf(fnme);
	stu name[n],found;
	FILE *file=fopen(fnme,"w");
	for(int i=0;i<n;i++)
	{
		name[i]=inputs(i+1);
		file_write(i,name[i],file);
	}
	fclose(file);
	file=fopen(fnme,"r");
	found=findstu(file,n,name);
	fclose(file);
	output(found);
	return 0;
} 
