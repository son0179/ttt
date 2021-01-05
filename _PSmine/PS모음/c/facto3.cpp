#include<stdio.h>
int x,y,z,cnt;
int main(){
	scanf("%d %d %d",&x,&y,&z);
	for(int i=x;i<=y;i++){
		if(i<10){
			if(i==z){
				cnt++;
			}
		}
		else if(i<100){
			if(i/10==z){
				cnt++;
			}
			if(i%10==z){
				cnt++;
			}
		}
		else{
			if(i/100==z){
				cnt++;
			}
			if(i%100/10==z){
				cnt++;
			}
			if(i%10==z){
				cnt++;
			}
		}
	}
	printf("%d",cnt);
}
