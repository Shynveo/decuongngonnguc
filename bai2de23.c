#include<stdio.h>
#include<math.h>
main(){
int a[50][50];
int i,j,n,m;
printf("nhap so dong:");scanf("%d",&n);
printf("nhap so cot:");scanf("%d",&m);
for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 	printf("a[%d][%d]=",i,j);scanf("%d",&a[i][j]);}
 	}
 	for(i=0;i<n;i++){
 for(j=0;j<n;j++){
printf("%5d",a[i][j]);}
printf("\n");}
int tbc=0;
int dem=0;
for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 	if(a[i][1]){
 	tbc+=a[i][j];
	dem++;}
 	}
}
printf("tbc cac phan tu tren cot 2 la:%d\n",tbc/dem);
int min=a[0][0];
for(i=0;i<n;i++){
 for(j=0;j<n;j++){
 	if(min>a[i][j])
 	min=a[i][j];}
 	}
printf("phan tu nho nhat la:%d",min);
}
