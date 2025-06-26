//Câu 2: viet chuong trình nhap vào mot dãy gom k so nguyên. Yêu cau:
//Tính trung bình cong các so duong và chia het cho 3
//Tìm phan tu nho nhat, In ket qua ra màn hình
#include<stdio.h>
#include<string.h>
main()
{
int a[100],k;
int i;
printf("nhap so phan tu:");scanf("%d",&k);
for(i=0;i<k;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}
int tbc=0;
for(i=0;i<k;i++){
if(a[i]>0&&a[i]%3==0)
tbc+=a[i];}
printf("tbc cac so duong chia het cho 3 la %d\n",tbc);
int min=a[0];
for(i=0;i<k;i++){
if(a[i]<min)
min=a[i];}
printf("phan tu nho nhat la: %d ",min);
}
