#include<stdio.h>
int main() {
	int x,y[10000]= {0},z,s=0;
	scanf("%d",&x);
	for(int i=0; i<x; i++) {
		scanf("%d",&y[i]);
	}
	scanf("%d",&z);
	for(int i=0; i<x; i++) {
		for(int j=i+1; j<x; j++) {
			if(y[i]>y[j]) {
				int tmp=y[i];
				y[i]=y[j];
				y[j]=tmp;
			}
		}
	}
	for(int i=0; i<x; i++) {
		s=s+y[i];
	}
	if(s<=z) {
		printf("%d",y[x-1]);
	} else {
		for(int i=y[x-1]; i>0; i--) {
			s=0;
			for(int j=0; j<x; j++) {
				if(y[j]>i) {
					s=s+i;
				} else {
					s=s+y[j];
				}
			}
			if(s<=z){
				printf("%d",i);
				break;
			}
		}
	}
}
