#include<stdio.h>
#include<math.h>
main(){
int a[100];
int i,k;
printf("nhap K:");scanf("%d",&k);
for(i=0;i<k;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}
int min=a[0];
for(i=0;i<k;i++){
if(min>a[i])
min=a[i];}
printf("phan tu nho nhat la %d\n",min);
printf("day xap xep theo chieu tang dan la:\n");
int tang,j;
for(i=0;i<k-1;i++){
 for(j=0;j<k-1-i;j++){
 if(a[j]>a[j+1]){
tang=a[j];
a[j]=a[j+1];
a[j+1]=tang;
    }
   }
  }
 for(i=0;i<k;i++){
printf("%d",a[i]);}
}
