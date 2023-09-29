program:
#include<stdio.h>
int main()
{
int a[50],n,i;
printf("enter the array size");
scanf("%d",&n);
printf("enter the elements of the array");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The array:");
for (i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

output:
enter the array size5
enter the elements of the array12 23 43 45 51
The array:12	23	43	45	51	
