//C�u 2: X�y dung cau tr�c Thisinh gom : Mats, ten, namsinh. Viet chuong tr�nh nhap mot danh s�ch th� sinh: 
//In ra th� sinh c� ten=�Ha�
//In ra th� sinh c� so tuoi nho nhat
#include<stdio.h>
#include<string.h>
typedef struct THISINH{
	char mats[20],ten[10];
	int namsinh;
}Thisinh;
Thisinh nhap(){
	Thisinh ts;
	fflush(stdin);
	printf("ma thi sinh: ");gets(ts.mats);
	printf("ten: ");gets(ts.ten);
	fflush(stdin);
	printf("nam sinh: ");scanf("%d",&ts.namsinh);
return ts;
}
void hienthi(Thisinh ts){
printf("%5s %5s %5d\n",ts.mats,ts.ten,ts.namsinh);
}
main(){
	Thisinh ts[100];
int n,i;
printf("Nhap so thi sinh ");scanf("%d",&n);
for(i=0;i<n;i++)
ts[i]=nhap();
printf("thi sinh co ten Ha\n");
for(i=0;i<n;i++)
if(strcmp(ts[i].ten,"Ha")==0)
hienthi(ts[i]);
int min=ts[0].namsinh;
printf("thi sinh co tuoi nho nhat la");
for(i=1;i<n;i++){
if(min<ts[i].namsinh)
min=ts[i].namsinh;
}for(i=0;i<n;i++){
if(ts[i].namsinh==min)
hienthi(ts[i]);}
}
