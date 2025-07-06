#include<stdio.h>
#include<math.h>
main(){
int a,b,c;
int n=9;
printf("cac truong hop la:\n");
for(a=0;a<=n;a++){
	for(b=0;b<=n;b++){
		for(c=0;c<=n;c++){
			if(a+b+c==9){
			printf("%d%d%d\n",a,b,c);
			}
		}
	}
}
}
