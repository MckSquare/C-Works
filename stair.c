#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count=0,c=0; 
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        while(count<(n-i)){
            printf(" ");
            count++;
        }
        while(c<i){
            printf("#");
            c++;
        }
        printf("\n");
        count=0;
        c=0;
    }
    return 0;
}
