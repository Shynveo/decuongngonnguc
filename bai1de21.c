#include<stdio.h>
main(){
int a,b;
int n;
printf("nhap a:");scanf("%d",&a);
printf("nhap b:");scanf("%d",&b);
if(b!=0){
n=a%b;
a=b;
b=n;}
printf("uoc chung lon nhat cua 2 so la:%d",n);
}
