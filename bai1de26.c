#include<stdio.h>
#include<math.h>
main(){
int a,b,c;
do{
printf("nhap a:");scanf("%d",&a);
printf("nhap b:");scanf("%d",&b);
printf("nhap c:");scanf("%d",&c);
if(!(a+b>c&&b+c>a&&a+c>b))
printf("3 canh tren khong tao thanh tam giac\n");
}while(!(a+b>c&&b+c>a&&a+c>b));
if(a==b&&a==c&&b==c)
printf("la tam giac deu");
else if(a==b||b==c||a==c)
printf("tam giac can");
else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
printf("la tam giac vuong");
else if(a==b||b==c||a==c){
if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
printf("la tam giac vuong can");}
else
printf("la tam giac thuong");
}
