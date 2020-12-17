#include <stdio.h>
#include <stdlib.h>

int main (int argc,char **argv){
    FILE *fp;
    if( (fp = fopen(argv[1],"r")) == NULL){
        fprintf(stderr,"usage: %s filename",argv[0]);
        return EXIT_FAILURE;
    }
    double *d = (double*)malloc(sizeof(double)*10000000);
    char dammy[20];
    fgets(dammy,10,fp);
    int checknumber = 0;
    while(fscanf(fp,"%lf",&(d[checknumber])) != EOF){
        checknumber++;
    }
    fclose(fp);
}