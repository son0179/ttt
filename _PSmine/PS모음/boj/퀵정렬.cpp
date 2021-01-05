#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[10]= {0};
int f(int s,int e) {
	int i=s+1,tmp;
	int j=e;
	if(s<e) {
		do {
			while(a[i]<a[s]) {
				i++;
			}
			while(a[j]>a[s]) {
				j--;
			}
			if(i<j) {
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
			//printf("\n");
			//for(int i=0 ; i<=9 ; i++) {
			//	printf("%d ",a[i]);
			//}
		} while(i<j);
		tmp=a[s];
		a[s]=a[j];
		a[j]=tmp;
		//printf("\n");
		//for(int i=0 ; i<=9 ; i++) {
		//	printf("%d ",a[i]);
		//}
		f(s,j-1);
		f(j+1,e);
	}
}

int main() {
	srand(unsigned(time(NULL)));
	for(int i=0 ; i<=9 ; i++) {
		a[i]=rand()%100;
		printf("%d ",a[i]);
	}
	a[0]=0;
	a[1]=1;
	f(1,0);
	printf("\n");
	for(int i=0 ; i<=1 ; i++) {
		printf("%d ",a[i]);
	}
}
