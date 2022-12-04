#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * Implement your solution in thi file
 *
 */

char* readString(char* fileName)
{
    FILE *file;
    file = fopen(fileName, "r");

    if (file == NULL) return NULL;

    fseek(file,0,SEEK_END);
    int length=ftell(file);
    fseek(file,0,SEEK_SET);

    char *string = malloc(sizeof(char) * length);

    char c;
    int i = 0;
    while((c = fgetc(file)) != EOF){
        string[i] = c;
        i++;
    }
    string[i-1]='\0';
    fclose(file);
    return string;

}
char* mysteryExplode(const char* str)
{
    int n = strlen(str)-1;
    int nExplode = (n*(n+1))/2;
    char src[n];

    char *explode = malloc(nExplode*sizeof(char)+1);
    char c;
    int i= 0;
    while((c = str[i]) != '\0'){
        src[i] = c;
        /*strcat(src1,src);*/
        strcat(explode,src);
        i++;
    }
    explode[strlen(explode)]='\0';
    return explode;
}

