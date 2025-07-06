#include<stdio.h>
main(){
int i,n;
float x,T=10.0;
printf("nhap n:");scanf("%d",&n);
printf("nhap x:");scanf("%f",&x);
for(i=2;i<=n;i++)
T+=i/x;
printf("gia tri cua bieu thuc:%.4f",T);
}
