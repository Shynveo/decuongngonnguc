//C�u 2: X�y dang cau tr�c Sinhvien gom : masv, hoten, tongdiem. 
//Viet chuong tr�nh nhap v�o n sinh vi�n. 
//H�y xap loai sinh vi�n neu tongdiem>=8 loai gioi, 7<=tongidem<8 loai kh�. In ket qua ra m�n h�nh
#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN{
char masv[20],ht[30];
int td;
}Sinhvien;
Sinhvien nhap(){
Sinhvien sv;
fflush(stdin);
printf("ma sinh vien: ");gets(sv.masv);
printf("ho va ten: ");gets(sv.ht);
fflush(stdin);
printf("tong diem: ");scanf("%d",&sv.td);
return sv;
}
void hienthi(Sinhvien sv){
printf("%-25s %-20s %d\n",sv.masv,sv.ht,sv.td);
}
void xeploai(Sinhvien sv){
if(sv.td>=8)
printf("loai gioi\n");
else if(sv.td>=7)
printf("loai kha\n");
else
printf("dup\n");
}
main(){
Sinhvien sv[100];
int n,i;
printf("nhap so sinh vien:");scanf("%d",&n);
for(i=0;i<n;i++)
sv[i]=nhap();
printf("xep loai sinh vien\n");
for(i=0;i<n;i++){
hienthi(sv[i]);
xeploai(sv[i]);}
}
