#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	int ary[n];
	printf("Nhap vao mang: ");
	for(int i = 0; i<n; i++){
		scanf("%d", &ary[i]);
	}
	int count=0, max=0, i=0;
	while(i<n){
		if(ary[i]>0){
			count++;
			if(count>max){
				max = count;
			}
		}
		else{
			count = 0;
		}
		i++;
	}
	printf("So luong so duong lien tiep nhieu nhat la : %d",max);
	return 0;
}