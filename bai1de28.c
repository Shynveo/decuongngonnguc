#include<stdio.h>
main(){
int i,n;
float x,T=100;
printf("nhap n:");scanf("%d",&n);
printf("nhap x:");scanf("%f",&x);
for(i=2;i<=n;i++)
T+=x/i;
printf("gia tri cua bieu thuc la:%.4f",T);
}
