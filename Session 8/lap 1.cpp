#include <stdio.h>
#include <string.h>
int main(){

char s1[100];
char s2[100];
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);
	
	printf("nhap chuoi 2:");
	scanf("%s",s2);
	
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	
	if(len1>len2){
		printf("chuoi 1 lon hon chuoi 2");
	}else{
		if(len1<len2){
		printf("chuoi 2 lon hon chuoi 1");	
		}else
		printf("hai chuoi bang nhau");
	}
	
}