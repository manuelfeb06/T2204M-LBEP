#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	printf("Nhap vao chuoi: ");
	scanf("%s",s);
	
	for(int i=0; i < strlen(s)/2; i++){
		int n = s[i];
		s[i] = s[strlen(s)-1-i];
		s[strlen(s)-1-i] = n;
		
	}
	printf("Chuoi dao nguoc la : %s",s);
}