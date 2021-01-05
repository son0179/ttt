#include<stdio.h>
int main(){
	int a_s=0,b_s=0,a[10]={0},b[10]={0};
	char winner[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		scanf("%d",&b[i]);
		if(a[i]>b[i]){
			a_s=a_s+3;
			winner[i]='A';
		}
		else if(a[i]<b[i]){
			b_s=b_s+3;
			winner[i]='B';
		}
		else{
			a_s++;
			b_s++;
			winner[i]='D';
		}
	}
	printf("%d %d\n",a_s,b_s);
	if(a_s>b_s){
		printf("A");
	}
	else if(a_s<b_s){
		printf("B");
	}
	else{
		for(int i=9;i>-1;i--){
			if(winner[i]!='D'){
				printf("%c",winner[i]);
				break;
			}
			if(i==0){
				printf("D");
			}
		}
	}
}
