#include<stdio.h>
int main() {
	int n,k,s,lm[100000]= {0},rm[100000]= {0},tmp;
	int maxl=0,maxr=0,p,d=0;
	scanf("%d%d%d",&n,&k,&s);
	for(int i=0; i<n; i++) {
		scanf("%d",&tmp);
		if(tmp<s) {
			if(maxl<s-tmp) maxl=s-tmp;
			scanf("%d",&lm[s-tmp]);
		} else {
			if(maxr<-s+tmp) maxr=-s+tmp;
			scanf("%d",&rm[-s+tmp]);
		}
	}
	p=k-1;
	for(int i=maxl;i>0;i--){
		if(lm[i]!=0){
			p=p+lm[i];
			d=d+p/k*i;
			p=p%k;
		}
	}
	
	p=k-1;
	for(int i=maxr;i>0;i--){
		if(rm[i]!=0){
			p=p+rm[i];
			d=d+p/k*i;
			p=p%k;
		}
	}
	
	printf("%d",d*2);
}
