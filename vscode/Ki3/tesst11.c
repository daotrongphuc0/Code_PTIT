#include <stdio.h>
#include <string.h>

int main(void){
    int t; scanf("%d",&t);
    while(t--){
        char str[1005] ;
        char so[10] ;
        char * p;
        int dem =0;
        scanf("%s",&str);
        scanf("%s",&so);
        p = strtok(str, so);
        if(p != NULL)dem++;
        
        while(p != NULL) {
            
            p = strtok(NULL, so);
            dem++;

        }
        printf("%d\n", dem);
    }
}