//C�u 1: Viet chuong tr�nh nhap v�o so nguy�n n,x. T�nh bieu thuc Q=10+e**x+e**2x+�+e**nx
#include<stdio.h>
#include<math.h>
main(){
int i,n;
float x;
double Q=10;
printf("nhap n: ");scanf("%d",&n);
printf("nhap x: ");scanf("%f",&x);
for(i=1;i<=n;i++){
Q+=exp(i*x);}
printf("gia tri cua bieu thuc la %.5f",Q);
}
