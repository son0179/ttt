#include <stdio.h>
int NUM[101] ;
FILE *fin ;
int main(){
    int i, token,N ;
    int count=0, from= 0, value ;
    fin = fopen("X","r");
    fscanf(fin,"%d",&N);
    for(i=0; i<N; i++){
        fscanf(fin,"%d",&token);
        NUM[i]= token;
    } 
    printf("%d\n", N ) ;
    value = NUM[ from ] ;
    while( count < N ) {
        while( value == 0 ) { 
            from = (from+1)%N; 
            value = NUM[ from ] ; 
        } 
        printf("%d ", value ) ;
        count++ ;
        NUM[ from ] = 0 ; 
        from = (value +from )% N ; 
        value = NUM[ from ] ; 
    } 
 
