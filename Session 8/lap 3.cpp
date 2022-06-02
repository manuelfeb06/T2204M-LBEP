#include<stdio.h>
#include<string.h>

int main(){
	char str[10][100];
	
	for(int i=0;i<10;i++){
		printf("Nhap vao chuoi thu %d : ",i+1);
		scanf("%s",str[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("Mang vua nhap la: %s\n",str[i]);
	}
}