#include<stdio.h>
int main() {
	int x,y[10000]= {0},z,s=0;
	scanf("%d",&x);
	for(int i=0; i<x; i++) {
		scanf("%d",&y[i]);
	}
	scanf("%d",&z);
	int max=y[0];
	for(int i=1; i<x; i++) {
		if(max<y[i]){
			max=y[i];
		}
	}
	for(int i=0; i<x; i++) {
		s=s+y[i];
	}
	if(s<=z) {
		printf("%d",max);
	} else {
		for(int i=max; i>0; i--) {
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
