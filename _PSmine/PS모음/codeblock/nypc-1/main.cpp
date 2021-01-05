#include<stdio.h>
char a[110000];
int c;
int main(){
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='S'){
            c++;
        }
        else{
            for(int j=1;j<=4;j++){
                if((c+j)%4==0){
                    c+=j;
                    break;
                }
            }
        }
    }
    printf("%d",c);
}
