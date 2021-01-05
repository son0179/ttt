#include<stdio.h>
int main() {
	int s=0;
	int i;
	int t=1;
	for(i=1;i<101;i=i+1){
		s=s+i*t;
		t=t*-1;
	}
	printf("%d",s);
}   
