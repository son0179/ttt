#include<stdio.h>
int x,y,n;
char m;
int main(){
	scanf("%d %d",&x,&y);
	while(x!=0&&y!=0){
		while (m=getchar()=='\n');
		scanf("%d",&n);
		printf("%c\n",m);
		if(m=='l'){
			x-=n;
		}
		else{
			y-=n;
		}
		printf("���� ��Ȳ : %d %d\n",x,y);
	}
	printf("�¸�!");
}
