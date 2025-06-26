//Câu 1: viet chuong trình nhap vào so nguyên n. tính tong các so chan trong khoang tu 1 den n . in ket qua ra màn hình
#include<stdio.h>
#include<math.h>
main()
{
int n,i;
int tong=0;
printf("nhap n: ");scanf("%d",&n);
for(i=0;i<n;i+=2)
tong+=i;
printf("tong cac so chan trong khoang tu 1 den %d la: %d",n,tong);
}
