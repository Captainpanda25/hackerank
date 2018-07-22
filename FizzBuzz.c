#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
//printf("Enter size\n");
//scanf("%d",&n);
//printf("Enter the numbers\n");
//for(i=0;i<n;i++)
//scanf("%d",&a[i]);
printf("The numbers after replacement are\n");
for(i=1;i<20;i++)
{
if(i%3==0)
printf("FIZZ\n");
else if(i%5==0)
printf("BUZZ\n");
if(i%3==0&&i%5==0)
printf("FIZZBUZZ\n");
else
printf("%d\n",i);
}
return 0;
}

