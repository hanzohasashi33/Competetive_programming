#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hh,mm,ss;
    int hh2,mm2,ss2;
    char time_form[3];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,time_form);
    if(strcmp(time_form,"AM")==0)
    {
        if(hh != 12)
        {
        hh2 = hh;
        mm2 = mm;
        ss2 = ss;
        }
        else
        {
            hh2 = 00;
            mm2 = mm;
            ss2 = ss;
        }
    }
    else if(strcmp(time_form,"PM")==0)
    {
        if(hh != 12)
        {
           hh2 = hh + 12;
           mm2 = mm;
           ss2 = ss;
        }
        else
        {
            hh2 = 12;
            mm2 = mm;
            ss2 = ss;
        }
    }
    printf("%02d:%02d:%02d",hh2,mm2,ss2);
    return 0;
    
    
}
