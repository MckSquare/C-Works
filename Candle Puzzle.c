#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,temp;
    int count=0;
    scanf("%d",&n);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }
    temp=height[1];
    for(int i=1;i<n;i++){
        if(temp<height[i]){
            temp=height[i];
        }
    }
    for(int i=0;i<n;i++){
        if(temp==height[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
