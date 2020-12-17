#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc,char **argv){
    FILE *fp;
    if( (fp = fopen(argv[1],"r")) == NULL){
        fprintf(stderr,"usage: %s filename",argv[0]);
        return EXIT_FAILURE;
    }
    double d[1000000];
    size_t dammy;
    fread(&dammy,sizeof(size_t),1,fp);
    printf("%zu\n",dammy);
    int checknumber = 0;
    while(fread(&d[checknumber],sizeof(double),1,fp) != 0){
        checknumber++;
    }
    fclose(fp);
}