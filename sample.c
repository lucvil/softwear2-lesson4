#include <stdio.h>

void test(int*);

int main(void){

}

void permutation(int *pattern, int *used, size_t number){
	int start = -1;

	for(int i = 0; i < number ; i++){
		if(pattern[i] == -1){
			start = i;
			break;
		}
	}

	if(start == -1){
		printf("[ ");
		for (int i = 0; i < number ; i++){
			printf("%d ",pattern[i]);
		}
		printf("]\n");
		return;
	}
	
}