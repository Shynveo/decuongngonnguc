//Viet chuong tr�nh nhap v�o mot mang gom n d�ng, m cot. thuc hien
//�em so phan tu chan chia het cho 3
//T�nh tong c�c phan tu nam tr�n  duong ch�o ch�nh.In ket qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
main(){
int a[100][100];
int i,j,n,m;
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
int dem=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 if(a[i][j]%3==0&&a[i][j]%2==0)
 dem++;}
printf("so phan tu chan chia het cho 3 l�:%d\n",dem);
int tong=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 if(i==j)
 tong+=a[i][j];}
printf("tong cac phan tu tren duong cheo chinh l�:%d",tong);
}
