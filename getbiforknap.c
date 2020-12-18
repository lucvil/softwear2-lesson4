#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
    FILE *fp;
    fp = fopen(argv[1],"wb");

       
    int numbercopy = 5;
    int *number = &numbercopy;
    
    double itemvalue[*number];
    double itemweight[*number];

    itemvalue[0] =0.7;
    itemvalue[1] =7.3;
    itemvalue[2] =13.0;
    itemvalue[3] =14.4;
    itemvalue[4] =12.3;

    itemweight[0] = 5.0;
    itemweight[1] = 5.9;
    itemweight[2] = 7.3;
    itemweight[3] = 7.9;
    itemweight[4] = 11.0;

    fwrite(number,sizeof(int),1,fp);
    fwrite(itemvalue,sizeof(double),(size_t)(*number),fp);
    fwrite(itemweight,sizeof(double),(size_t)(*number),fp);
    

    fclose(fp);

    return 0;
}