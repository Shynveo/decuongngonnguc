//C�u 1: viet chuong tr�nh nhap v�o so nguy�n n. t�nh bieu thuc T=sqrt(1)+sqrt(3)+�+sqrt(n)
#include<stdio.h>
#include<math.h>
main()
{
int n,i;
float T=0;
printf("nhap n:");scanf("%d",&n);
for(i=1;i<=n;i+=2)
T+=sqrt(i);
printf("gia tri cua bieu thuc la: %.5f",T);
}
