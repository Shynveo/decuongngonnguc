#include<stdio.h>
#include<math.h>
main(){
int k,i;
float T=99.0;
printf("Nhap K:");scanf("%d",&k);
for(i=1;i<=k;i++)
T+=pow(-1,i)*(1.0/10*i);
printf("gia tri cua bieu thuc la:%.4f",T);
}
