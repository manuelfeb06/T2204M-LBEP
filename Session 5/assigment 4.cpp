#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int ary[n];
	printf("Nhap vao mang: ");
	for(int i=0; i<n; i++){
		scanf("%d", &ary[i]);
	}
	int min=ary[0], max=ary[0];
	for(int i=0; i<n; i++){
		if(min > ary[i]){
			min = ary[i];
		}
	}
	for(int i=0; i<n; i++){
		if(max < ary[i]){
			max = ary[i];
		}
	}
	if(abs(min) > abs(max)){
		printf("Gia tri %d co doan [-%d,%d] chua cac gia tri trong mang ", min, abs(min), abs(min));
	}
	else{
		printf("Gia tri %d co doan [-%d,%d] chua cac gia tri trong mang ", max, abs(max), abs(max));
	}
}