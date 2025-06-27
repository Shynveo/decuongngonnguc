// Viet chuong trình nhap vào mot dãy gom m  so nguyên. Yêu cau
//Tính tong các so âm, so duong
//In các so chia het cho 6 tan cùng bang 2
#include<stdio.h>
#include<math.h>
main(){
int a[100];
int m,i;
printf("nhap m so nguyen: ");scanf("%d",&m);
for(i=0;i<m;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}//co {} vao ko no chay dung 1 lan day :)))
int tam=0,tduong=0;
for(i=0;i<m;i++)
if(a[i]<0)
tam+=a[i];
else if(a[i]>0)
tduong+=a[i];
printf("tong cac so am la: %d \n",tam);
printf("tong cac so duong la: %d \n",tduong);
for(i=0;i<m;i++)
if(a[i]%6==0&&a[i]%10==2)
printf("so chia het cho 6 tan dung la 2 la:%d\n",a[i]);
}
