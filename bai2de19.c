//Viet chuong trình nhap vào mot mang gom n dòng, m cot. thuc hien
//Ðem so phan tu chan chia het cho 3
//Tính tong các phan tu nam trên  duong chéo chính.In ket qua ra màn hình
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
printf("so phan tu chan chia het cho 3 là:%d\n",dem);
int tong=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 if(i==j)
 tong+=a[i][j];}
printf("tong cac phan tu tren duong cheo chinh là:%d",tong);
}
