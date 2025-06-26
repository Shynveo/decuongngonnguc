//Xây dung cau trúc thisinh gom : mats, hoten, diemtoan, diemanh
//Viet chuong trình nhap mot danh sách thí sinh
//In ra các thí sinh mats=”A0001”.
//In ra sinh viên có tong diem nho nhat
#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct THISINH{
char mats[30],hoten[35];
int  diemtoan,diemanh;	
}Thisinh;
Thisinh nhap(){
	Thisinh ts;
	fflush(stdin);
	printf("ma thi sinh ");gets(ts.mats);
	printf("ho va ten ");gets(ts.hoten);
	fflush(stdin);
	printf("diem toan ");scanf("%d",&ts.diemtoan);
	printf("diem anh ");scanf("%d",&ts.diemanh);
return ts;
}
void hienthi(Thisinh ts){
printf("%5s %5s %5d %5d\n",ts.mats,ts.hoten,ts.diemtoan,ts.diemanh);
}
main(){
Thisinh ts[100];
int i,n;
printf("so thi sinh la ");scanf("%d",&n);
for(i=0;i<n;i++)
ts[i]=nhap();
printf("thi sinh co ma A0001 la:");
for(i=0;i<n;i++)
if(strcmp(ts[i].mats,"A0001")==0)
hienthi(ts[i]);
int td=ts[0].diemanh+ts[0].diemtoan;
printf("\nthi sinh co tong diem thap nhat la \n");
for(i=0;i<n;i++){
if(td>ts[i].diemanh+ts[i].diemtoan)
td=ts[i].diemanh+ts[i].diemtoan;
}
for(i=0;i<n;i++)
if(ts[i].diemanh+ts[i].diemtoan==td)
hienthi(ts[i]);
}
