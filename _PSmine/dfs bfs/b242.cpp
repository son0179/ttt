#include<stdio.h>
int a[9][9]={0};
int stack[100]={0};
int sp=1;
int dfs(int);
int check_nord[10]={0};
int push(int x){
	stack[sp]=x;
	sp++;
	check_nord[x]=1;
	printf("%d\n",x);
	dfs(x);
}
int pop(){
	sp--;
	if(sp>0){
		dfs(stack[sp]);	
	}
}
int dfs(int x){
	int next;
	int ch=0;
	for(int i=0 ; i<=9 ; i++){
		if(a[x][i]==1&&check_nord[i]==0){
			next=i;
			ch=1;
			break;
		}
	}
	if(ch==1){
		a[x][next]=0;
		a[next][x]=0;
		push(next);
	}
	else{
		pop();
	}
}
int main(){
	int n,m;
	for(int i=0;i<9;i++){
		scanf("%d %d",&n,&m);
		a[m][n]=1;
		a[n][m]=1;
	}
	push(1);
}
