//Câu 2: Xây dung cau trúc Sinh vien Gom: Masv, Hoten, tongdiem. Thuc hien
//Viet chuong trình nhap vào danh sách sinh viên
//In ra sinh viên có tong diem cao nhat
#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN{
	char masv[20],hoten[30];
	int tongdiem;
}Sinhvien;
Sinhvien nhap(){
Sinhvien sv;
fflush(stdin);
printf("ma sinh vien: ");gets(sv.masv);
printf("ho va ten: ");gets(sv.hoten);
fflush(stdin);
printf("tong diem: ");scanf("%d",&sv.tongdiem);
return sv;
}
void hienthi(Sinhvien sv){
printf("%5s %5s %5d\n",sv.masv,sv.hoten,sv.tongdiem);
}
main(){
Sinhvien sv[100];
int i,n;
printf("nhap so sinh vien:");scanf("%d",&n);
for(i=0;i<n;i++)
sv[i]=nhap();
int max=0;
printf("sinh vien co tong diem cao nhat:\n");
for(i=0;i<n;i++){
if(sv[max].tongdiem<sv[i].tongdiem){
max=i;}
}
hienthi(sv[max]);
}
