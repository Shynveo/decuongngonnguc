//Câu 2: Xây dung cau trúc NhanVien  gom: Manv, hoten, Phongban.
//Viet chuong trình nhap vào danh sách nhân viên. 
//In ra các nhân viên phòng ke toán
//Sap xep Hoten nhân viên theo trat tu tang dan
#include<stdio.h>
#include<string.h>
typedef struct NHANVIEN{
	char manv[30],hoten[30],phongban[30];
}Nhanvien;
Nhanvien nhap(){
Nhanvien nv;
fflush(stdin);
printf("ma nhan vien: ");gets(nv.manv);
printf("ho va ten: ");gets(nv.hoten);
printf("phong ban: ");gets(nv.phongban);
return nv;
}
void hienthi(Nhanvien nv){
printf("%5s %5s %5s\n",nv.manv,nv.hoten,nv.phongban);
}
main(){
	Nhanvien nv[100];
	int i,n;
	printf("nhap so nhan vien: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	nv[i]=nhap();
printf("nhan vien phong ke toan la\n");
for(i=0;i<n;i++)
if(strcmp(nv[i].phongban,"ke toan")==0)
hienthi(nv[i]);
int j;
for(i=0;i<n-1;i++){
 for(j=i+1;j<n;j++){
if(strcmp(nv[i].hoten,nv[j].hoten)>0){
Nhanvien temp=nv[i];
nv[i]=nv[j];
nv[j]=temp;
  }
 }
}
printf("nhan vien sau khi dc sap xep \n");
for(i=0;i<n;i++)
hienthi(nv[i]);
}
