//viet chuong trình nhap thông tin sinh viên: hoten, tongdiem.
//Xep loai cho sinhvien. neu tongdiem<6 kém, 6<=tongdiem<7 trung bình,7<=tongidem<8 khá. Còn lai gioi
#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN{
	char ht[30];
	int td;
}Sinhvien;
Sinhvien nhap(){
Sinhvien sv;
fflush(stdin);
printf("ho va ten: ");gets(sv.ht);
fflush(stdin);
printf("tong diem: ");scanf("%d",&sv.td);
return sv;
}
void hienthi(Sinhvien sv){
printf("%5s %5d ",sv.ht,sv.td);}
void xeploai(Sinhvien sv){
if(sv.td<6)
printf("kem\n");
else if(sv.td>=6&&sv.td<7)
printf("trung binh\n");
else if(sv.td>=7&&sv.td<8)
printf("kha\n");
else
printf("gioi\n");
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
	xeploai(sv[i]);}
}
