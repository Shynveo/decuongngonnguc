//Câu 2: Xây dung cau trúc NhanVien gom: Manv, hoten, phongban. Viet chuong trinh thuc hien các yêu cau sau:
//Nhap vào danh sách nhân viên
//In ra các nhân viên o phòng ke toán
#include<stdio.h>
#include<string.h>
typedef struct NHANVIEN{
	char mnv[20],ht[50],pb[30];
}Nhanvien;
//ÐN ham nhap 1 nhan vien
Nhanvien nhap(){
	Nhanvien nv;
	fflush(stdin);
	printf("Ma nhan vien: ");gets(nv.mnv);
	printf("Ho va ten: ");gets(nv.ht);
	fflush(stdin);
	printf("Phong ban: ");gets(nv.pb);;
	return nv;	
}
//ÐN ham in 1 nhan vien
void hienthi(Nhanvien nv){
	printf("%-20s %-25s %-20s \n",nv.mnv,nv.ht,nv.pb);
}
main(){
	Nhanvien nv[100];
	int n,i;
	//nhap so nhan vien
	printf("Nhap so nhan vien: ");scanf("%d",&n);
	//nhap thong tin cho n nhan vien
	for(i=0;i<n;i++)
		nv[i]=nhap();
	//In danh sach nhan vien phong ke toan
	for(i=0;i<n;i++)
	if(strcmp(nv[i].pb,"Ke toan")==0||strcmp(nv[i].pb,"Ke Toan")==0)
	//strcmp so sánh 2 chuoi (y la so sanh cai chu ke toan ay)
		hienthi(nv[i]);	
	
}
