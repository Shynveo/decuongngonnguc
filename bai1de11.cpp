//C�u 1: viet chuong tr�nh giai b�i to�n co: �100 con tr�u, 100 b� co. 
//tr�u dung an nam, tr�u nam an ba, lu khu tr�u gi� ba con ot b�. 
//T�m so tr�u dung, tr�u nam, tr�u gi�
#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
int dung,nam,gia;
for(dung=0;dung<=100;dung++){
for(nam=0;nam<=100;nam++){
gia=100-dung-nam;
if(5*dung+3*nam+gia*1/3==100){
printf("so trau dung la %d \n",dung);
printf("so trau nam la %d \n",nam);
printf("so trau gia la %d \n",gia);
printf("hoac\n");
     }
   }
 }
return 0;
}
