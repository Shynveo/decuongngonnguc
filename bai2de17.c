//xây dung cau trúc sinhvien gom: masv, hoten, tongdiem.Viet chuong trình nhap vào n sinh viên
//In ra sinh viên có tong diem cao nhat
//In ra màn hình ds thông tin do (neu tongdiem>=17
#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN{
	char masv[20],hoten[30];
	int tongdiem;
}Sinhvien;
Sinhvien nhap(){
Sinhvien sv;
fflush(stdin);
printf("ma sv: ");gets(sv.masv);
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
printf("nhap so sinh vien: ");scanf("%d",&n);
for(i=0;i<n;i++){
sv[i]=nhap();}
int max=0;
for(i=0;i<n;i++){
if(sv[max].tongdiem<sv[i].tongdiem)
max=i;}
printf("sinh vien co tong diem cao nhat la: \n");
hienthi(sv[max]);
printf("xeploaisv \n");
for(i=0;i<n;i++){
if(sv[i].tongdiem>=7){
printf("da do\n");
hienthi(sv[i]);
}else if(sv[i].tongdiem<7){
printf("da truot \n");
hienthi(sv[i]);}
}
}
