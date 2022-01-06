#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <stdio.h>
#include <stdlib.h>

#include "utility.h"

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
void greet() {

	char date[100];
	get_date(date);
	printf(date);
	printf("Kodo 1.0.0 on linux");
}

#endif