#include <stdio.h>

int main(){
	int a = 5;
	for(int i=1;i<=a;i++){
		for(int j=0;j<i;j++){
			for(int k=0;k<i;k++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
}