//C�u 1: Viet chuong tr�nh nhap v�o so nguy�n x, n. t�nh bieu thuc:T=100+x/10-x/20+�+(-1)**<n+1>x/10*n
#include<stdio.h>
#include<math.h>
main(){
int i,n;
float x,T=100;
printf("nhap n: ");scanf("%d",&n);
printf("nhap x: ");scanf("%f",&x);
for(i=1;i<n;i++){
T+=pow(-1,i+1)*(x/(10*i));
}
//pow(x,y) voi x mu y hay x**y cho i l� kieu nguyen roi len co the dung voi -1
printf("gia tri cua bieu thuc la: %.5f",T);
return 0;
}
