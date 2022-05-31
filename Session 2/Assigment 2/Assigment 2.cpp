#include <stdio.h>

int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	int Max = 0;
	int i = 1;
	while(i < n){
		if(i % 2 == 0 && i % 3 == 0){
			Max = i;
		}
		i++;
	}
	printf("Max = %d", Max);
	
	return 0;
}