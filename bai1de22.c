#include<stdio.h>
#include<math.h>
main(){
float i,n;
float T=100;
printf("nhap so nguyen n:");scanf("%d",&n);
for(i=2;i<=n;i++){
T+=1/(i*(i+1));}//dung 1.0 de ep chia thuc
printf("gia tri cua bieu thuc la:%.4f",T);
}
