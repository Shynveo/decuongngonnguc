//viet chuong tr�nh nhap v�o mot x�u. Thuc hien c�c y�u cau sau:
//�em so k� tu dau c�ch xuat hien trong x�u
//In ra x�u dao nguoc
#include<stdio.h>
#include<string.h>
main(){
char a[100];
int i,n;
printf("nhap 1 xau: ");gets(a);
n=strlen(a);
int dem=0;
for(i=0;i<n;i++)
if(a[i]==' '){
dem++;}
printf("so ky tu dau cach xuat hien trong xau l�: %d\n",dem);
printf("xau sau khi dao nguoc la: %s",strrev(a));
}
