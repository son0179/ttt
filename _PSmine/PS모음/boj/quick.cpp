#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[100]={0};
int quick(int st, int ed){
	int i=st+1;
	int j=ed;
	int tmp;
	if(st<ed){
		do{
			while(a[i]<a[st]&&i<=j){
				i++;
			}
			while(a[j]>a[st]&&i<=j){
				j--;
			}
			if(i<j){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}while(i<j);
		tmp=a[st];
		a[st]=a[j];
		a[j]=tmp;
		quick(st,j-1);
		quick(j+1,ed);
	}
}
int main(){
	srand((unsigned)time(NULL));
	for(int i=0; i <=9 ; i++){
		a[i]=rand()%100+1;
		printf("%d ",a[i]);
	}
	printf("\n");
	quick(0,9);
	for(int i=0 ; i<=9 ; i++){
		printf("%d ",a[i]);
	}
}
