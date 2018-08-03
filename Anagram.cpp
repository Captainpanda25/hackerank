#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,i,j,count=0,c;
char str1[10],str2[10];
cout<<"Enter 2 strings"<<endl;
cin>>str1>>str2;
for(i=0;i<strlen(str1);i++)
{
for(j=0;j<strlen(str2);j++)
{
if(str1[i]==str2[j])
count=count+2;
}
}
//cout<<count<<endl;
c=strlen(str1)+strlen(str2)-count;
cout<<"The characters to be removed: "<<c<<endl;
}
