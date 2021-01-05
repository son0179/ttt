#include<stdio.h>
int main(){
    int hl=-1,tmp=0;
    char a[10000],b[5][2000];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        hl++;
    }
    for(int i=0;i<5;i++){
        if(i<(hl+1)%5){
            for(int j=0;j<=(hl+1)/5;j++){
                b[j][i]=a[tmp];
                tmp++;
            }
        }
        else{
            for(int j=0;j<(hl+1)/5;j++){
                b[j][i]=a[tmp];
                tmp++;
            }
        }
    }
    for(int i=0;i<hl/5+1;i++){
        for(int j=0;j<5&&tmp>0;j++){
            printf("%c",b[i][j]);
            tmp--;
        }
    }
}
