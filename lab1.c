#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * Implement your solution in thi file
 *
 */
char *line[MAX_LINE_LEN];
char *explode;

char* readString(char* fileName)
{
    FILE*ptr = fopen(fileName,"r");
    fgets(line,99, ptr);
    return line;

}
char* mysteryExplode(const char* str)
{
    int n = strlen(str)-1;
    int nExplode = (n*(n+1))/2;

    explode = malloc(nExplode*sizeof(char)+1);
    int i,j,k;

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            explode[k]=str[j];
            k+=1;
        }
    }
    return explode;
}

