#include<stdio.h>
#include<math.h>
main(){
int a[100];
int n,i;
printf("nhap n:");scanf("%d",&n);
for(i=0;i<n;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);
}
int chan=0,le=0;
int demc=0,deml=0;
for(i=0;i<n;i++){
	if(a[i]%2==0){
		chan+=a[i];
		demc++;}
		}
		printf("tbc so chan %d\n",chan/demc);
for(i=0;i<n;i++){
	if(a[i]%2!=0){
		le+=a[i];
		deml++;}
		}
		printf("tbc so le %d\n",le/deml);
int xep,j;
for(i=0;i<n-1;i++){
 for(j=0;j<n-1-i;j++){
 if(a[j]<a[j+1]){
 	xep=a[j];
 	a[j]=a[j+1];
 	a[j+1]=xep;}
	 }
	}
for(i=0;i<n;i++)
printf("%d",a[i]);	
}
