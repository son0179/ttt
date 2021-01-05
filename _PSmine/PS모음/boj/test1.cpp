#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int x[10]= {0};
int q(int st,int e) {
	int memory=st,memory1=e,i,j,m;
	m=x[st];
	i=st+1;
	j=e;
	while(memory<memory1) {
		for(int i1=i; i1<=j; i1++) {
			if(x[i1]>=m) {
				memory=i1;
				break;
			}
		}
		for(int j1=j; j1>=i; j1--) {
			if(x[j1]<=m) {
				memory1=j1;
				break;
			}
		}
		if(memory<memory1) {
			int tmp=x[memory];
			x[memory]=x[memory1];
			x[memory1]=tmp;
		} else {
			printf("done");
			int tmp=x[memory1];
			x[memory1]=m;
			m=tmp;
			q(st,memory1-1);
			printf("done1");
			q(memory1+1,e);
			printf("done2");
			break;
		}

	}

}
int main() {
	srand((unsigned)time(NULL));
	for(int i=0; i<10; i++) {
		x[i]=rand()%100+1;
		printf("%d ",x[i]);
	}
	q(0,9);
	printf("\n");
	for(int goorinae=0; goorinae<10; goorinae++) {
		printf("%d ",x[goorinae]);
	}
}
