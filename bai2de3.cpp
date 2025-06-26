//Câu 2: Xây dung cau trúc NhanVien gom: Manv, hoten, phongban. Viet chuong trinh thuc hien các yêu cau sau:
//Nhap vào danh sách nhân viên
//In ra các nhân viên o phòng ke toán
#include<stdio.h>
#include<string.h>
typedef struct NHANVIEN{
char manv[20],ht[30],pb[30];
}Nhanvien;
Nhanvien nhap(){
Nhanvien nv;
fflush(stdin);
printf("ma nhan vien: ");gets(nv.manv);
printf("ho va ten: ");gets(nv.ht);
fflush(stdin);
printf("phong ban: ");gets(nv.pb);
return nv;
}
void hienthi(Nhanvien nv){
 printf("%-20s %-25s %-20s \n",nv.manv,nv.ht,nv.pb);
}
main()
{
Nhanvien nv[100];
int n,i;
printf("nhap so nhan vien: ");scanf("%d",&n);
for(i=0;i<n;i++)
nv[i]=nhap();
for(i=0;i<n;i++)
if(strcmp(nv[i].pb,"Ke toan")==0||strcmp(nv[i].pb,"Ke Toan")==0)
hienthi(nv[i]);
}
