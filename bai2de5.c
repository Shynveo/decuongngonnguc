//C�u 2: Viet chuong tr�nh nhap v�o mot x�u. Thuc hien c�c y�u cau sau:
//Kiem tra x�u c� phai l� x�u doi xung kh�ng
//�ao nguoc x�u,Chuyen x�u th�nh chu in hoa
#include<stdio.h>
#include<string.h>
main(){
char a[100];
int i,n,dem=0;
printf("nhap xau: ");gets(a);
n=strlen(a);
for(i=0;i<n/2;i++){
if(a[i]!=a[n-1-i])
dem=1;}
if(dem==0)
printf("l� chuoi doi xung\n");
else
printf("khong l� chuoi doi xung\n");
int x=strrev(a);
printf("chuoi sau khi dao nguoc la: %s\n",x);
int y=strupr(a);
printf("chuoi sau khi dao nguoc la: %s",y);
}
