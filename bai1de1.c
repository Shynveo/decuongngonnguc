//viet chuong trình nhap vào 2 so a, b. In ra uoc chung lon nhat cua hai so
#include<stdio.h>
#include<math.h>
main()
{
int a,b;
int t;
printf("nhap a: ");scanf("%d",&a);
printf("nhap b: ");scanf("%d",&b);
int x=a;
int y=b;
int r;
while(y!=0){
r=x%y;
x=y;
y=r;}
printf("uoc chung lon nhat cua hai so %d va %d la %d",a,b,x);
}
