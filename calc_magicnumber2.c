#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//バイナリデータからfloatとして値を求める

int main (int argc,char **argv){
    FILE *fp;
    if( (fp = fopen(argv[1],"rb")) == NULL){
        fprintf(stderr,"usage: %s binarydata.dat",argv[0]);
        return EXIT_FAILURE;
    }
    float d[4] = {0};
    int checknumber = 0;
    //size_t size;
    while(fread(&d[checknumber],sizeof(float),1,fp) != 0){
        checknumber++;
    }
    for(int i = 0; i < checknumber; i++){
        printf("%.200f\n",d[i]);
    }
    fclose(fp);
}