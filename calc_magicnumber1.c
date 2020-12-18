#include <stdio.h>
#include <stdlib.h>

//textデータをバイナリデータに変換する
int main(int argc, char**argv)
{
  // 1000万作成したdouble を テキスト/バイナリファイルで出力してみる
  // 先頭に個数情報を出力しておく
  // バイナリの場合はsizeof(size_t)分を最初に出力する
  if (argc != 3){
    fprintf(stderr,"usage: %s <txt filename> <binary filename>\n",argv[1]);
    return EXIT_FAILURE;
  }
  size_t size = 16;
  char *d = (char*)malloc(sizeof(char)*100); // とりあえず100確保
  //char buf[100];



  //テキストから入力する
  FILE *fp;
  if ( (fp = fopen(argv[1],"r")) == NULL ){
    fprintf(stderr,"%s: cannot open file.\n",argv[1]);
    return EXIT_FAILURE;
  }

  fgets(d,100,fp);
  printf("%s\n",d);
  fclose(fp);

  // "wb"の'b'はwindows は必須, linux/mac はなくてもよい ("w" でOK)
  if ( (fp = fopen(argv[2],"wb")) == NULL ){
    fprintf(stderr,"%s: cannot open file.\n",argv[1]);
    return EXIT_FAILURE;  
  }

  // dポインタを先頭にからsize個のcharデータを出力
  fwrite(d,sizeof(char),size,fp);
  fclose(fp);
  return EXIT_SUCCESS;
}