//Câu 2: Viet chuong trình nhap vào mot mang gom n dòng, m cot. tính
//Tong các phan tu có tan cùng bang 6. In ket qua
//Tìm phan tu lon nhat cua mang
#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
int n,m,i,j;
int a[50][50];
printf("nhap so dong: ");scanf("%d",&n);
printf("nhap so cot: ");scanf("%d",&m);
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
  printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);}
  }
    for(i=0;i<n;i++){
   for(j=0;j<m;j++)
  printf("%5d",a[i][j]);
 printf("\n");}
int tong=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++)
if(a[i][j]%10==6)
tong+=a[i][j];}
printf("tong cac phan tu co tan cung bang 6 la: %d\n",tong);
int max=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++)
if(a[i][j]>max)
max=a[i][j];}
printf("phan tu lon nhat cua mang la: %d",max);
}
