#include<stdio.h>
#include<math.h>
main(){
int a[100];
int i,n;
printf("nhap n:");scanf("%d",&n);
for(i=0;i<n;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}
int tongle=0;
int demle=0;
for(i=0;i<n;i++){
if(a[i]%2!=0){
demle++;
tongle+=a[i];}
}
printf("tong cac so le la:%d\n",tongle/demle);
int tongc=0;
int demc=0;
for(i=0;i<n;i++){
if(a[i]%2==0){
demc++;
tongc+=a[i];}
}
printf("tong cac so chan la:%d\n",tongc/demc);
 printf("day sau khi xap sep theo chieu tang dan: ");	
int j,xep;
for(i=0;i<n-1;i++){
 for(j=0;j<n-1-i;j++){
  if(a[j]<a[j+1]){
 	xep=a[j];
 	a[j]=a[j+1];
 	a[j+1]=xep;
 	}
   }
  }
for(i=0;i<n;i++)
printf("%d",a[i]);  
}
