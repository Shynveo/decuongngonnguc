// mot so ho�n hao l� so m� tong c�c uoc so cua n� bang ch�nh n�.
//H�y t�m c�c so ho�n hAo<100. Vd:  so  6 c� c�c uoc l� 1,2,3 1+2+3=6
#include<stdio.h>
#include<math.h>
main(){
int n,x;
int dem;
printf("so hoan hao <100 la: \n");
for(n=2;n<100;++n){
dem=0; //khoi tao lai bien dem trong vong lap l
for(x=1;x<n;++x){
if(n%x==0)
dem+=x;}
if(n==dem)
printf("%d  ",n);}// thuoc vong lap n
return 0;
}
