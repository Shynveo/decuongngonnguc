//Câu 2: Viet chuong trình nhap vào mot xâu. Thuc hien các yêu cau sau:
//Kiem tra xâu có phai là xâu doi xung không
//Ðao nguoc xâu,Chuyen xâu thành chu in hoa
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
printf("là chuoi doi xung\n");
else
printf("khong là chuoi doi xung\n");
int x=strrev(a);
printf("chuoi sau khi dao nguoc la: %s\n",x);
int y=strupr(a);
printf("chuoi sau khi dao nguoc la: %s",y);
}
