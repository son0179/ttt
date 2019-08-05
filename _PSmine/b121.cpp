#include<stdio.h>
#include<vector>
std::vector <int> bit;
int f(int n){
	if(n>0){
		bit.push_back(0);
		f(n-1);
		bit.pop_back();
		bit.push_back(1);
		f(n-1);
		bit.pop_back();
	}
	else{
		for(int i=0 ; i<bit.size() ; i++){
			printf("%d",bit[i]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
}
