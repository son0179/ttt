#include<stdio.h>
int index,hl;
char s[10000];
int main(){
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        hl++;
    }
    while(index<hl){
        if(s[index]=='p'){
            if(s[index+1]=='i'){
                index+=2;
            }
            else{
                printf("NO");
                return 0;
            }
        }
        else if(s[index]=='k'){
            if(s[index+1]=='a'){
                index+=2;
            }
            else{
                printf("NO");
                return 0;
            }
        }
        else if(s[index]=='c'){
            if(s[index+1]=='h'&&s[index+2]=='u'){
                index+=3;
            }
            else{
                printf("NO");
                return 0;
            }
        }
        else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
