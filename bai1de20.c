//de c� so tien l� 200000vnd.Can phai c� bao nhi�u to tien c� menh gi� 10000,20000,30000 vnd.
//T�m c�c kha nang xay ra
#include<stdio.h>
#include<math.h>
main(){
int a,b,c;
int dem=0;
 for(a=0;a<=200000/10000;a++){
  for(b=0;b<=200000/20000;b++){
   for(c=0;c<=200000/30000;c++){
   	if(10000*a+20000*b+30000*c==200000){
   		dem++;
   	    }
   	  }
    }
  }
printf("so cach chon la %d",dem);
}
