//C�u 1: Viet chuong tr�nh nhap v�o 2 so a, b. giai v� bien luan phuong tr�nh dang ax+b=0
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
