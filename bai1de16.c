//Câu 1: viet chuong trình nhap vào 2 so a, b. tìm uoc chung lon nhat cua 2 so,in ket qua
#include<stdio.h>
#include<math.h>
main(){
int a,b;
int i,t;
printf("nhap a:");scanf("%d",&a);
printf("nhap b:");scanf("%d",&b);
printf("uoc chung lon nhat cua 2 so %d va %d là:",a,b);
if(b!=0){
t=a%b;
a=b;
b=t;}
printf("%d",b);
}
