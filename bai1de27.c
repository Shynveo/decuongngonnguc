#include<stdio.h>
main(){
int i,n;
int T=0;
printf("nhap n");scanf("%d",&n);
for(i=1;i<=n;i++)
T+=i*(i+1);
printf("gia tri:%d",T);
}
