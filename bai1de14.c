//Câu 1: Viet chuong trình nhap vào 2 so a, b. giai và bien luan phuong trình dang ax+b=0
#include<stdio.h>
#include<math.h>
main(){
int a,b;
printf("nhap a: ");scanf("%d",&a);
printf("nhap b: ");scanf("%d",&b);
if(a!=0)
printf("phuong trinh co dang: x=-%d/%d",b,a);
else{
	if(b==0)
	printf("phuong trinh vo so nghiem");
	else
	printf("phuong trinh vo nghiem");
	}
}
