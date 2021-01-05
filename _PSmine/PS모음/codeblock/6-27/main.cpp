/*
#include<stdio.h>
int main() {
	long long int a,b;
	scanf("%lld %lld", &a,&b);
	printf("%lld\n",a+b);
	printf("%lld\n", a>b?a-b:b-a);
	printf("%lld\n",a*b);
	printf("%d\n",(int)a/(int)b);
	printf("%lld\n",a%b);
	printf("%.2lf",(double)a/(double)b);
}

*/

//#include<stdio.h>
//int main(){
//    int a, b;
//    scanf("%d %d", &a, &b);
 //   printf("%c",a*b>100?'o':'x');
//}
#include<stdio.h>
int b[15][15];
int main() {
	int x=2,y=2;
	for(int i=1;i<=10;i++){
       for(int j=1;j<=10;j++){
        scanf("%d",&b[i][j]);
       }
	}
	while(b[x][y]!=2){
        if(b[x][y+1]!=1){
            b[x][y]=9;
            y++;
        }
        else if(b[x+1][y]!=1){
            b[x][y]=9;
            x++;
        }
        else{
            b[x][y]=9;
            break;
        }
	}
	b[x][y]=9;
	for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
	}
}
