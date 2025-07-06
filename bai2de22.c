#include<stdio.h>
#include<math.h>
main(){
int a[50][50];
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
printf("\n");
}
int tbc=0;
int dem=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 	if(a[i][j]%2!=0&&a[i][j]%3==0){
 	tbc+=a[i][j];
 	dem++;}
 	}
 	}
 	printf("tbc so le chia het cho 3 la:%d",tbc/dem);
int max=0;
for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 	if(max<a[i][j])
 	max=a[i][j];}
 	}
printf("phan tu lon nhat la:%d",max);
}
