//Câu 1: viet chuong trình nhap vào so nguyên x, n. tính bieu thuc
//T=100+x/2+x/3+…+x/n  In ket qua ra màn hình
#include<stdio.h>
#include<math.h>
main(){
int n,i;
float x,T=100;
printf("nhap n: ");scanf("%d",&n);
printf("nhap x: ");scanf("%f",&x);
for(i=2;i<=n;i++)
T+=x/i;
printf("gia tri cua bieu thuc la:%.5f",T);
}
