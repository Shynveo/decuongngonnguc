//Câu 2: Viet chuong trình nhap vào mot dãy gom n so nguyên
//Tính tong các so duong là so le. in ket qua ra màn hình
//Tim phan tu lon nhat, in ket qua
#include<stdio.h>
#include<string.h>
main(){
int n,i;
printf("nhap so phan tu :");scanf("%d",&n);
int a[100];
for(i=0;i<n;i++){
printf("a[%d]= ",i);scanf("%d",&a[i]);}
 int tong=0;
 int max=a[0];
    for(i=0;i<n;i++) {
        if(a[i]>0&&a[i]%2==1){
            tong+=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
printf("tong cac so duong la so le la: %d\n",tong);
printf("phan tu lon nhat la : %d",max);
}

