#include <stdio.h>
#include <string.h>

int main(){
	int TC, byte, num;
	char google[8001], c;
	scanf("%d", &TC);
	for (int t = 1; t <= TC; t++){
		scanf("%d", &num);
		scanf("%s", google);
		printf("Case #%d: ", t);
		for (int i = 0; i < 8 * num; i++){
			byte *= 2;
			if (google[i] == 'I'){byte++;}
			if (i % 8 == 7){
				c = byte;
				byte = 0;
				printf("%c", c);
			}
		}
		printf("\n");
	}
}