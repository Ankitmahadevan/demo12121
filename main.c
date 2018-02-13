#include<stdio.h>
#include<math.h>
void main()
{
int a;
int count=0;
printf("Enteger");
scanf("%d",&a);
printf("h");
printf("%d",a);
int temp=a;
while(temp>=0)
{
count++;
temp=temp/10000;
//printf("Hai %d\n",count);
}
int a1;
scanf("%d",&a1);
int y=count/4;
if(count%4!=0)
{
count=count%4;
a=a*pow(10,count);
printf(" a :%d\n",a);
}
scanf("%d",&a1);

int b[y-1];
int t=y-1;
while(t>0)
{
b[t]=a%10000;
t--;
printf("B:%d\n",b[t]);
}
scanf("%d",&a1);

int i;
for(i=0;i<y-1;y++)
printf("%d",b[i]);
}
