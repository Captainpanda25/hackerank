#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,j,l,a[n];
int count;
int flag=0;
printf("Enter the value of n(size of array)\n");
scanf("%d",&n);
printf("n=%d\n enter the numbers\n",n/2);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
count=0;
for(j=i;j<n;j++)
{
if(a[j]==a[i])
count++;
}
if(count>n/2)
{
l=a[i];
flag=1;
}
}
if(flag==1)
printf("Success, %d is present!",l);
else
printf("No number present");

}

