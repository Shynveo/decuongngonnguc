//viet chuong tr�nh nhap v�o 1 d�y so nguy�n . thuc hien:
//T�nh tong c�c so kh�ng �m. In ket qua
//Sap xep d�y so tang dan. in ket qua
#include<stdio.h>
#include<math.h>
main(){
int a[100];
int i,j,n;
printf("nhap so phan tu phai nhap: ");scanf("%d",&n);
for(i=0;i<n;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}
int tong=0;
for(i=0;i<n;i++){
	if(a[i]>0)
	tong+=a[i];}
	printf("tong cac so khong am la %d\n",tong);
printf("day sau khi xap sep theo chieu tang dan: ");	
int xep;
for(i=0;i<n-1;i++){
 for(j=0;j<n-1-i;j++){
  if(a[j]>a[j+1]){
 	xep=a[j];
 	a[j]=a[j+1];
 	a[j+1]=xep;
 	}
   }
  }
for(i=0;i<n;i++)
printf("%d",a[i]);  
}
