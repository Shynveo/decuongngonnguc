//C�u 1: viet chuong tr�nh nhap v�o so nguy�n n. t�nh tong c�c so chan trong khoang tu 1 den n . in ket qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
main()
{
int n,i;
int tong=0;
printf("nhap n: ");scanf("%d",&n);
for(i=0;i<n;i+=2)
tong+=i;
printf("tong cac so chan trong khoang tu 1 den %d la: %d",n,tong);
}
