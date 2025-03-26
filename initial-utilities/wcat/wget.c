#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Must specify file!\n");
		return 1;
	}
	FILE *file = fopen(argv[1], "r");
	if (file == NULL) {
		fprintf(stderr, "Could not open file!\n");
		return 1;
	}
	char buffer[255];
	while (1) {
		char *val = fgets(buffer, 255, file);
		if (val == NULL) {
			return 0;
		}
		printf("%s", buffer);
	}
}
