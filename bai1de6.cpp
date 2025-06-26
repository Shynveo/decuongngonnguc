//Câu 1: viet chuong trình nhap vào so nguyên n. thuc hien bieu thuc:
//T=100-20+30-…+(-)10*n
//In ket qua ra màn hình
#include<stdio.h>
#include<math.h>
main()
{
int n,i,T=100;
printf("nhap so nguyen n: ");scanf("%d",&n);
for(i=1;i<=n;i++)
T+=pow(-1,i+1)*10*i;
printf("gia tri cua bieu thuc la:%d",T);
}
