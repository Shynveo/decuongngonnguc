//C�u 2: X�y dung cau tr�c Sinhvien gom: masv, Hoten, tongdiem.Viet chuong tr�nh nhap v�o n sinh vi�n. 
//H�y xep loai sinh vi�n neu tongdiem>=8 loai gioi, 7<= tongdiem<8 loai kh�, 6<=tongdiem<7 loai trung b�nh. In ket qua
#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN{
	char masv[20],hoten[30];
	int tongdiem;
}Sinhvien;
Sinhvien nhap(){
Sinhvien sv;
fflush(stdin);
printf("ma sinh vien:");gets(sv.masv);
printf("ho va ten");gets(sv.hoten);
fflush(stdin);
printf("tong diem:");scanf("%d",&sv.tongdiem);
return sv;
}
void hienthi(Sinhvien sv){
printf("%5s %5s %5d\n",sv.masv,sv.hoten,sv.tongdiem);
}
main(){
Sinhvien sv[100];
int i,n;
printf("nhap so sinh vien: ");scanf("%d",&n);
for(i=0;i<n;i++)
sv[i]=nhap();
printf("xep loai sinh vien\n");
for(i=0;i<n;i++){
hienthi(sv[i]);
if(sv[i].tongdiem>=8){
printf("sinh vien thuoc loai gioi\n");
}else if(sv[i].tongdiem>=7){
printf("sinh vien thuoc loai kha\n");
}else if(sv[i].tongdiem>=6){
printf("sinh vien thuoc loai tb\n");
}else
printf("sinh vien thuoc loai yeu\n");
}
}
