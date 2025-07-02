// viet chuong trình nhap vào mot dãy gom k so nguyên. Yêu cau
//Tính trung bình cong các so không âm. In ket qua
//Ðem các so le. in ket qua
#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
int a[100];
int i,k;
printf("so phan tu k:");scanf("%d",&k);
for(i=0;i<k;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}
int tbc=0,dem=0;
for(i=0;i<k;i++){
if(a[i]>0)
dem++;
tbc+=a[i];}
printf("tbc cac so khong am la:%d\n",tbc/dem);
int le=0;
for(i=0;i<k;i++){
if(a[i]%2!=0)
le++;}
printf("chuoi co %d so le",le);
}
