//C�u 1:  viet chuong tr�nh nhap v�o mot x�u k� tu. thuc hien
//Kiem tra x�u c� phai l� x�u doi xong ko
//�em so k� tu �A� xuat hien trong x�u
#include<stdio.h>
#include<string.h>
main(){
char a[100];
int i,n;
int dem=0;
printf("nhap xau: ");gets(a);
n=strlen(a);
for(i=0;i<n/2;i++)
if(a[i]!=a[n-1-i])
dem=1;
if(dem==1)
printf("khong phai la xau doi xung\n");
else
printf("la xau doi xung\n");
int so=0;
for(i=0;i<n;i++)
if(a[i]=='A')
so++;
printf("so ky tu A xuat hien trong xau la : %d",so);
}
