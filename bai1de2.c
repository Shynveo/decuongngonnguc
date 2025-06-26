//nhap vao so nguyen n>0 co phai la so  khong 
#include<stdio.h>
#include<conio.h>
main()
{
int i,n,dem=0;
do{
printf("nhap n:");scanf("%d",&n);
}
while(n<=1);
for(i=2;i<n;i++)
if(n%i==0)
dem=1;
if(dem==1)
	printf("%d khong la so nguyen to",n);
	else 
	printf("%d la so nguyen to",n);
	getch();
}
