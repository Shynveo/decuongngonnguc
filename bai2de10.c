//C�u 2: Viet chuong tr�nh nhap v�o mot x�u k� tu. Thuc hien
//Kiem tra x�u c� phai l� x�u doi xung kh�ng?
//�em so k� tu �X� xuat hien trong x�u. In ket qua ra m�n h�nh
#include<stdio.h>
#include<string.h>
main(){
char a[100];
int i,n,dem=0;
int so=0;
printf("nhap sau ");gets(a);
n=strlen(a);
for(i=0;i<n/2;i++)
if(a[i]!=a[n-1-i])
dem=1;
if(dem==1)
printf("xau khong doi xung\n");
else 
printf("xau doi xung\n");
for(i=0;i<n;i++)
if(a[i]=='X')//so sanh ki tu dung nhay don nhe :))))
so++;
printf("so ky tu X trong xau la %d",so);
}
