#include<stdio.h>
int main() {
	int o[1001][3]= {0},n,tmp,k,rank=1;
	scanf("%d %d",&n,&k);
	for(int i=0; i<n; i++) {
		scanf("%d",&tmp);
		scanf("%d %d %d",&o[tmp][0],&o[tmp][1],&o[tmp][2]); 
	}
	tmp=1;
	for(int i=1; i<=n; i++) {
		if(i!=k) {
			for(int j=0 ; j<=2;j++){
				if(o[k][j]<o[i][j]){
					rank++;
				}
				else if(o[k][j]>o[i][j]){
					break;
				}
			}
		}
	}
	printf("%d",tmp);
}
