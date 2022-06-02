#include<stdio.h>
#include<string.h>

int main(){
	char s[10][100];
	
	for(int i=0; i<10; i++){
		printf("Nhap chuoi thu %d : ",i+1);
		scanf("%s",s[i]);
	}
	char s2[100];
	strcpy(s2,s[0]);
	
	for(int i=0; i<10; i++){
		if(strcmp(s2,s[i]) > 0){
			strcpy(s2,s[i]);
		}
	}
	printf("Chuoi phai dung dau day anphabet la : %s",s2);
}