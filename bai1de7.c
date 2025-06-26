//Câu 1: vi3t chuong trình nhqp vào 3 so a, b, c . ki3m tra xem 3 so dó tao thành tam giác gì
#include<stdio.h>
#include<math.h>
main()
{
int a,b,c;
do{
printf("nhap a: ");scanf("%d",&a);
printf("nhap b: ");scanf("%d",&b);
printf("nhap c: ");scanf("%d",&c);
if(!(a+b>c&&a+c>b&&b+c>a))
printf("khong la 1 tam giac co the nhap lai\n");
}while(!(a+b>c&&a+c>b&&b+c>a));
if(a==b==c)
printf("la tam giac deu");
else if(a==b||b==c||a==c)
printf("la tam giac can");
else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
printf("la tam giac vuong");
else if(a==b||b==c||a==c){
if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
printf("la tam giac vuong can");}
else
printf("la tam giac thuong");
}
