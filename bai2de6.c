//C�u 2: Viet chuong tr�nh nhap v�o mot mang gom n d�ng, m cot. thuc hien
//�em so phan tu chan chia het cho 3
//T�nh tong c�c phan tu o h�ng 2. In ket qua
#include<stdio.h>
#include<math.h>
#include<conio.h>
main(){
int a[100][100];
int n,m;
int i,j;
printf("mang gom so dong la: ");scanf("%d",&n);
printf("mang gom so cot la: ");scanf("%d",&m);
printf("nhap so phan tu cua ma tran\n");
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
  printf("a[%d][%d]=",i,j);
  scanf("%d",&a[i][j]);}
  }
   for(i=0;i<n;i++){
    	for(j=0;j<m;j++)
    	 printf("%5d",a[i][j]);
    	printf("\n");}
int dem=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++)
 if(a[i][j]%2==0&&a[i][j]%3==0)
 dem++;
 }
 printf("\nso phan tu chan chia het cho 3 la:%d\n",dem);
 int tong=0;
{
 for(i=1;i<2;i++)//i=1 la phan tu o hang 2
 for(j=0;j<m;j++)
tong+=a[i][j];}
printf("tong cac phan tu o hang 2 la %d",tong);
}
