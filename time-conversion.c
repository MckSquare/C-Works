#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char *s=(malloc)(sizeof(char)*2);
    long int hh,mm,ss;
    scanf("%ld:%ld:%ld%s",&hh,&mm,&ss,s);
    if(hh==12&&strcmp("AM",s)==0)
        printf("%02d:%02ld:%02ld", 00,mm,ss);
    else if(hh==12&&strcmp("PM",s)==0)
        printf("%d:%02ld:%02ld",12,mm,ss);
    else{
        if(strcmp("AM",s)==0)
            printf("%02ld:%02ld:%02ld", hh,mm,ss);
        else
            printf("%02ld:%02ld:%02ld", hh+12,mm,ss);
    }
    return 0;
}
