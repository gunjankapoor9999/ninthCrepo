#include<stdio.h>
#include<conio.h>
int main(){
int n,rem,rev=0;
printf("enter a number: ");
scanf("%d",&n);
while(n!=0)
{
  rem=n%10;
  rev=rev*10+rem;
  n/=10;
}
while(rev!=0)
{
  switch(rev%10)
  {
    case 0: printf("zero ");
            break;
    case 1: printf("one ");
            break;
    case 2: printf("two ");
            break;
    case 3: printf("three ");
            break;
    case 4: printf("four ");
            break;
    case 5: printf("five ");
            break;
    case 6: printf("six ");
            break;
    case 7: printf("seven ");
            break;
    case 8: printf("eight ");
            break;
    case 9: printf("nine ");
            break;
  }
  rev/=10;
}
return 0;
}
