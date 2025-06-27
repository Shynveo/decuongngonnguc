//viet chuong trình nhap vào so nguyên n. Kiem tra xem n có phai là so nguyên  to không?
#include<stdio.h>
#include<math.h>
main(){
int n,i;
int dem=0;
printf("nhap n: ");scanf("%d",&n);
for(i=2;i<n;i++)
if(n%i==0)
dem=1;
if(dem==1)
printf("khong la so nguyen to");
else
printf("la so nguyen to");
}
