#include<stdio.h>
int main(){
	int n,a[30]={0};
	char s[100]={0};
	scanf("%s",s);
	
	for(int i=0 ; s[i]!='\0' ; i++){
		a[s[i]-'a']++;
	}
	
	for(n=0;n<='z'-'a';n++){
		if(a[n]!=0){
			printf("%c %d\n",n+'a',a[n]);
		}
	}
	
	
	
}
