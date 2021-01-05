#include<stdio.h>
int main() {
	int n,p[1000]={0},s[1000]={0},hap=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(p[i]>p[j]){
				int tmp=p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
		}
	}
	s[0]=p[0];
	
	for(int i=1;i<n;i++){
		s[i]=s[i-1]+p[i];
	}
	for(int i=0;i<n;i++){
		hap+=s[i];
	}
	printf("%d",hap);
}
