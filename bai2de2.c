//C�u 2: X�y dung cau tr�c NhanVien gom: Manv, hoten, phongban. Viet chuong trinh thuc hien c�c y�u cau sau:
//Nhap v�o danh s�ch nh�n vi�n
//In ra c�c nh�n vi�n o ph�ng ke to�n
#include<stdio.h>
#include<string.h>
typedef struct NHANVIEN{
	char mnv[20],ht[50],pb[30];
}Nhanvien;
//�N ham nhap 1 nhan vien
Nhanvien nhap(){
	Nhanvien nv;
	fflush(stdin);
	printf("Ma nhan vien: ");gets(nv.mnv);
	printf("Ho va ten: ");gets(nv.ht);
	fflush(stdin);
	printf("Phong ban: ");gets(nv.pb);;
	return nv;	
}
//�N ham in 1 nhan vien
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
	//strcmp so s�nh 2 chuoi (y la so sanh cai chu ke toan ay)
		hienthi(nv[i]);	
	
}
