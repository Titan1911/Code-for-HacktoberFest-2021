//Suhasshenoy

#include<stdio.h>



void printnum(int n){
    if(n>10){
        return;
    }
    printf("%d ",n);

    printnum(n+1);
}


int main(){

    printnum(1);

    return 0;

}