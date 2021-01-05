#include<Stdio.h>
int main(){
	int n=3,a[5][5]={0},tik=1;
	for(int i=0 ; i<=4 ; i++){
		a[i][2]=n+5*i;

		for(int j=1 ; j<=2 ; j++){
			a[i][2-j]=n+5*i-j*tik;
			a[i][2+j]=n+5*i+j*tik;
		}
		tik=tik*-1;	
	}
	
	for(int i=0 ; i<=4 ; i++){
		for(int j=0 ; j<=4 ; j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
