//C�u 1: viet chuong tr�nh nhap v�o so nguy�n n. t�nh bieu thuc sau: T=1*2+2*3+�+n*(n+1)
#include<stdio.h>
#include<math.h>
main(){
int n,i;
int T=0;
printf("nhap so nguyen n: ");scanf("%d",&n);
for(i=0;i<=n;i++)
T+=i*(i+1);
printf("gia tri cua bieu thuc la %d",T);
}
