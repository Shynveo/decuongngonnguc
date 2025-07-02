//xây dung cau trúc NhanVien gom:manv,hoten,tuoi.Viet chuong trình thuc hien
//Nhap vào danh sách gom n nhân viên
//In ra các nhân viên o do tuoi nghi huu (tuoir >=55 nghi huu)
#include<stdio.h>
#include<string.h>
typedef struct NHANVIEN{
char manv[20],hoten[30];
int tuoi;	
}Nhanvien;
Nhanvien nhap(){
Nhanvien nv;
fflush(stdin);
printf("ma nhan vien: ");gets(nv.manv);
printf("ho va ten: ");gets(nv.hoten);
fflush(stdin);
printf("tuoi: ");scanf("%d",&nv.tuoi);
return nv;
}
void hienthi(Nhanvien nv){
printf("%5s %5s %5d\n",nv.manv,nv.hoten,nv.tuoi);}
main(){
Nhanvien nv[100];
int i,n;
printf("nhap so nhan vien: ");scanf("%d",&n);
for(i=0;i<n;i++)
nv[i]=nhap();
printf("danh sách nhan vien nghi huu la: ");
for(i=0;i<n;i++)
if(nv[i].tuoi>=55)
hienthi(nv[i]);
}
