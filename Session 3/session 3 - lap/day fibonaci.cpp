#include <stdio.h>

int main(){
	int n;
	do{
	   printf("Nhap so nguyen duong n: ");
	   scanf("%d", &n);
    }while(n<0);
    
	if(n==1 || n==2){
		printf("1");
	}else {
		int i = 3;
		int x1=0, x2=1, x3=1;
		while (i<=n){
			x1 = x2;
			x2 = x3;
			x3 = x1+x2;
			
			i++;
		}
		printf("so can tim: %d", x3);
	}
	return 0;
}