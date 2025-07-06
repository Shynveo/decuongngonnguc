#include<stdio.h>
#include<string.h>
typedef struct SINHVIEN{
	char masv[40],ht[30];
	int td;
}Sinhvien;
Sinhvien nhap(){
Sinhvien sv;
fflush(stdin);
printf("ma sinh vien:");gets(sv.masv);
printf("ho va ten:");gets(sv.ht);
fflush(stdin);
printf("tong diem:");scanf("%d",&sv.td);
return sv;
}
void hienthi(Sinhvien sv){
printf("%5s %5s %5d\n",sv.masv,sv.ht,sv.td);
}
main(){
Sinhvien sv[100];
int i,n;
printf("nhap so sinh vien:");scanf("%d",&n);
for(i=0;i<n;i++)
sv[i]=nhap();
printf("sinh vien co tong diem cao nhat la:\n");
int max=0;
for(i=0;i<n;i++)
if(max<sv[i].td){
max=sv[i].td;}
for(i=0;i<n;i++)
if(sv[i].td==max){
hienthi(sv[i]);}
}
