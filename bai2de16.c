// viet chuong tr�nh nhap v�o mot d�y gom k so nguy�n. Y�u cau
//T�nh trung b�nh cong c�c so kh�ng �m. In ket qua
//�em c�c so le. in ket qua
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
