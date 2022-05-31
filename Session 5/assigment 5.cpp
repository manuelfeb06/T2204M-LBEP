#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int ary[n];
	printf("Nhap vao mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &ary[i]);
		for(int j=0; j<i; j++){
			while(ary[j] == ary[i]){
				printf("cac so nhap vao trung nhau");
				scanf("%d", &ary[i]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",ary[i]);
	}
}