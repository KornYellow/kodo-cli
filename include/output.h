#include <stdio.h>
#include <stdlib.h>

#ifndef OUTPUT_HPP
#define OUTPUT_HPP

void too_many_args() {

	printf("Too many arguments\n");
	printf("try \'./kodo --help\'.\n");
	exit(1);
}
void help() {

	printf("What do want to do?\n");
	printf("For example, try \'./kodo --help\'.\n");
	exit(1);
}

#endif