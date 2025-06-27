//Câu 1: viet chuong trình giai bài toán co: “100 con trâu, 100 bó co. 
//trâu dung an nam, trâu nam an ba, lu khu trâu già ba con ot bó”. 
//TÍm so trâu dung, trâu nam, trâu già
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
