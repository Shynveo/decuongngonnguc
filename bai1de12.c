//C�u 1: Viet chuong tr�nh nhap v�o so nguy�n n
//T�nh n={1*3*�*n(neu n le) 2*4*�n(neu n chan 
#include<stdio.h>
#include<math.h>
main()
{
int n,i;
int t=1;
printf("nhap n: ");scanf("%d",&n);
if(n%2!=0)
for(i=1;i<=n;i+=2)
t=t*i;
else 
for(i=2;i<=n;i+=2)
t=t*i;
printf("gia tri cua bieu thuc la %d",t);
}
