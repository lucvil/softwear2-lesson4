#include <stdio.h>

void test(int*);

int main(void){
    /*
	if (argc != 2){
		fprintf(stderr, "usage: %s filename\n", argv[0]);
		return EXIT_FAILURE;
	}
	FILE *fp;
	if ( (fp = fopen(argv[1],"rb")) == NULL){
		// fopen は失敗した場合 errno の変数をセットする
		// perror は errno の番号に対応したメッセージを返してくれる
		perror(argv[1]); 
		return EXIT_FAILURE;
	}
    */

    /*
	unsigned short a = 1;
	
	// unsigned char型ポインタを用意する
	// 上記の先頭アドレスをキャストして代入
	unsigned char *p = (unsigned char*)&a;
	
	for (int i = 0 ; i < sizeof(unsigned short) ; i++){
		printf("%p\n", p+i);
		for (int b = 0 ; b < 8 ; b++){
			printf("%d", p[i] & 1 << (7-b));
		}
		printf("\n");
	}
	return 0;
    */

    int a = 0;
    test(&a);
    return 0;



}

void test (int *a){
    printf("%d\n",(*a)++);
    test(a);
}