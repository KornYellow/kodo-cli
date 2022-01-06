#define VERSION "1.0.0"

#include <stdio.h>
#include <string.h>

#include "../include/output.h"
#include "../include/kodo.h"

int main(int args_count, char* args[]) {

	if(args_count > 2) too_many_args();
	else if(args_count == 2) {
		if(strcmp(args[1], "--help") == 0 || strcmp(args[1], "-h") == 0) help();
	}
	else run();

	return 0;
}