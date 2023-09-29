Program:
#include<stdio.h>
int main()
{
int a[50],n,i,item,pos;
printf("enter the array size");
scanf("%d",&n);
printf("enter the elements of the array");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("The array:");
for (i=0;i<n;i++)
printf("%d\t",a[i]);
printf("Enter the item :");
scanf("%d",&item);
printf("Enter the position of the element");
scanf("%d",&pos);
n=n+1;
for(i=n;i>=pos-1;i--)
a[i]=a[i-1];
a[pos-1]=item;
printf("the array:");
for (i=0;i<n;i++)
printf("%d\t",a[i]);
}



OUTPUT:
enter the array size5
enter the elements of the array12 42 46 41 86
The array:12	42	46	41	86	
Enter the item :75
Enter the position of the element3
the array:12	42	75	46	41	86	

