//viet chuong trình nhap vào mot xâu. Thuc hien các yêu cau sau:
//Ðem so ký tu dau cách xuat hien trong xâu
//In ra xâu dao nguoc
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
printf("so ky tu dau cach xuat hien trong xau là: %d\n",dem);
printf("xau sau khi dao nguoc la: %s",strrev(a));
}
