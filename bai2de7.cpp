//C�u 2: viet chuong tr�nh nhap v�o mot d�y gom k so nguy�n. Y�u cau:
//T�nh trung b�nh cong c�c so duong v� chia het cho 3
//T�m phan tu nho nhat, In ket qua ra m�n h�nh
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
