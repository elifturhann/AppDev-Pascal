#include <stdio.h>
#include "pascal.h"

int main(void) {

	int n, k;
	for (n = 0; n < ROWS; n++) {
		for (k = 0; k <= ROWS - n; k++) printf("  ");
		for (k = 0; k <= n; k++) {
			printf("%4d", bionomial(n, k));
		}
		printf("\n");
	}
}