#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define A 80
#define TIME 5
int main(){
	int ch,b;
	int a=0;
	
	ch=getchar();
	while(1){
	    while(a<A){
		    for(b=0;b<a;b++){
			    putchar(' ');
		    }
		    putchar(ch);
		    Sleep(TIME);
		    system("cls");
		    a++;
	    }
	    while(a>0){
		    for(b=a;b>0;b--){
			    putchar(' ');
		    }
		    putchar(ch);
		    Sleep(TIME);
		    system("cls");
		    a--;
	    }
	}
	
	return 0;
}

