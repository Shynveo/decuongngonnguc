#include<stdio.h>
#include<math.h>
main(){
int a[40][40];
int i,j,n,m;
printf("nhap so dong:");scanf("%d",&n);
printf("nhap so cot:");scanf("%d",&m);
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 	printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);}
 	}
 	for(i=0;i<n;i++){
 for(j=0;j<m;j++){
printf("%5d",a[i][j]);}
printf("\n");}
int dem=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 	if(a[i][j]%3==0)
	dem++;}
 	}
printf("so phan tu chia het cho 3 la:%d",dem);
int tong=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 	if(i==j)
	tong+=a[i][j];}
 	}
printf("tong phan tu tren duong cheo chinh la:%d",tong);
}
