#include<stdio.h>
void read(int*,int*,int,int);

void main()
{
int a[20],b[20],c[20],k=0,n1,n2;
printf("Enter the number of element n1:\n");
scanf("%d",&n1);
printf("Enter the number of element n2:\n");
scanf("%d",&n2);
read(a,b,n1,n2);
int i=0;
int j=0;
k=0;
while(i<n1 && j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else if(a[i]>b[i])
{
c[k]=b[j];
j++;
}
else
{
c[k]=a[i];
i++;
j++;
}
k++;
}
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}
void read(int *a,int *b,int n1,int n2)
{
	int i,j;;
printf("enter the element in 1st array\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements in 2nd array\n");
for(j=0;j<n2;j++)
{
scanf("%d",&b[j]);
}


}
