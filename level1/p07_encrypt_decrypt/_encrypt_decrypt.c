#include<stdio.h>
#define MAXN 1023
char ch2[MAXN];
char* encrypt(char*,int);
char* decrypt(char*,int);
int main(){
	char ch1,ch[MAXN];
	int n=0,i=0;
	
	printf("����һ���ַ�\n");
	while((ch1=getchar())!='\n'&&n++<MAXN){
		ch[i++]=ch1;
	}
    encrypt(ch,n);
	decrypt(ch2,n);
	
	return 0;
}
char* encrypt(char*ch,int n){
	int i;
	for(i=0;i<n;i++){
		ch2[i]=ch[i]+3;
	}
	puts(ch2);
	return ch2;
}
char* decrypt(char*ch,int n){
	int i;
	for(i=0;i<n;i++){
		ch2[i]=ch[i]-3;
	}
	puts(ch2);
	return ch2;
}
