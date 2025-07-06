#include<stdio.h>
#include<math.h>
main(){
int a[100];
int i,m;
printf("nhap m:");scanf("%d",&m);
for(i=0;i<m;i++){
printf("a[%d]=",i);scanf("%d",&a[i]);}
int tam=0,tduong=0;
for(i=0;i<m;i++){
	if(a[i]>0){
		tduong+=a[i];}
	else
	    tam+=a[i];}
	printf("tong duong:%d\n",tduong);
	printf("tong am:%d\n",tam);
for(i=0;i<m;i++){
	if(a[i]%6==0&&a[i]%10==2)
		printf("%d\n",a[i]);
}
}
