#include<stdio.h>
int main() {
	char d,f[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','z'};
	scanf("%c",&d); // double(long float) 형식으로 입력
	for(int i=0;i<52;i++){
		if(f[i]==d){
			printf("%c",f[i+1]);
			break;
		}
	}
}

