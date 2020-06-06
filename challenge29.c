#include<stdio.h>
#include<conio.h>
int main()
{
int n,p,result=1;
printf("enter a number");
scanf("%d",&n);
printf("enter power to which number is raised");
scanf("%d",&p);
for(int i=1;i<=p;i++)
{
result=result*n;
}
printf("%d",result);
return 0;

}
