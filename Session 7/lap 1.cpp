#include<stdio.h>

int tinhLT(int a,int b){  // tinh luy thua
	int s=1;
	for(int i=1;i<=b;i++){
		s=s*a;
	}
	return s;
}

int main(){
	printf("luy thua bac 2 cua 6 la: %d",tinhLT(6,2));
}