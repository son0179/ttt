#include<stdio.h>
int main(){
	int n,cnt=0,ch=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(cnt==0){
			ch=1;
			cnt++;
		}
		else if(cnt==6){
			ch=0;
			cnt--;
		}
		if(ch==1){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	printf("%d",cnt);
}
