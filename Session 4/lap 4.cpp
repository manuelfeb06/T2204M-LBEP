#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &ary[i]);
	}
	int sl = ary[0];
	for(int i=0; i<n; i++){
		if(ary[i] % 2 != 0){
			sl = ary[i];
		}
	}
	printf("So le cuoi cung la : %d",sl);
}