//C�u 1: viet chuong tr�nh nhap v�o so nguy�n n. thuc hien bieu thuc:
//T=100-20+30-�+(-)10*n
//In ket qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
main()
{
int n,i,T=100;
printf("nhap so nguyen n: ");scanf("%d",&n);
for(i=1;i<=n;i++)
T+=pow(-1,i+1)*10*i;
printf("gia tri cua bieu thuc la:%d",T);
}
