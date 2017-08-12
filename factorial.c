#include<stdio.h>
int main() 
{
int i,k;
long int j=1;
scanf("%d",&k);
for(i=1;i<=k;i++)
{
j=j*i;
}
printf("%ld",j);
return 0;
}
