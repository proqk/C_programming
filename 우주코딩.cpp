#include <stdio.h>
#include <stdlib.h>

int main() {
	system("mode con: cols=200 lines=100");
	int star;
	char a[20] = { '`', '^', '*', '-', '+', '.', ',', '_', ' ','~' };

	while (1) {
		for (int i = 0; i < 500; i++) {
			printf("%c", a[rand() % 10]);
			for (int j = 0; j < rand() % 50; j++) {
				printf(" ");
			}
		}
	}
}
