#include<stdio.h>
int t,a,b,c,d;
int f(int a,int b,int c,int d){
    if(a+b-c==d){
        printf("%d+%d-%d=%d\n",a,b,c,d);  //1
    }
    else if(a+b*c==d){
        printf("%d+%d*%d=%d\n",a,b,c,d);  //2
    }
    else if(a+b/c==d&&b%c==0){
        printf("%d+%d/%d=%d\n",a,b,c,d);  //3
    }
    else if(a-b+c==d){
        printf("%d-%d+%d=%d\n",a,b,c,d);  //4
    }
    else if(a-b*c==d){
        printf("%d-%d*%d=%d\n",a,b,c,d);  //5
    }
    else if(a-b/c==d&&b%c==0){
        printf("%d-%d/%d=%d\n",a,b,c,d);  //6
    }
    else if(a*b+c==d){
        printf("%d*%d+%d=%d\n",a,b,c,d);  //7
    }
    else if((a*b)/c==d&&(a*b)%c==0){
        printf("%d*%d/%d=%d\n",a,b,c,d);  //8
    }
    else if(a*b-c==d){
        printf("%d*%d-%d=%d\n",a,b,c,d);  //9
    }
    else if((double)a*(double)((double)b+(double)c/(double)10)==(double)d){
        printf("%d*%d.%d=%d\n",a,b,c,d);  //10
    }
    else if(a/b+c==d&&a%b==0){
       printf("%d/%d+%d=%d\n",a,b,c,d);  //11
    }
    else if((double)((double)a/(double)b)*(double)c==(double)d){
        printf("%d/%d*%d=%d\n",a,b,c,d);  //12
    }
    else if(a/b-c==d&&a%b==0){
        printf("%d/%d-%d=%d\n",a,b,c,d);  //13
    }
    else if((double)a/(double)((double)((double)b+(double)c/(double)10))==(double)d/*&&(double)a%(double)((double)b+(double)c/10)==(double)0*/){
        printf("%d/%d.%d=%d\n",a,b,c,d);  //14
    }
    else if((((double)a+(double)b/(double)10)*(double)c)==(double)d){
        printf("%d.%d*%d=%d\n",a,b,c,d);  //15
    }
}
int main(){
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		f(a,b,c,d);
	}
}
