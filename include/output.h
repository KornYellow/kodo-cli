#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utility.h"

void too_many_args() {

	printf("Too many arguments\n");
	printf("try \'./kodo --help\'.\n");
	exit(1);
}
void help() {

	printf("  -s  : print out today's tasks status (or --status)\n");
	printf("  -h  : print this help message and exit (or --help)\n");
	exit(1);
}
void greet() {

	char date_git[100];
	get_date_from_git(date_git);

	char date_now[12];
	get_date_now(date_now);

	unsigned int remaining_tasks = 20;

	printf("Kodo %s (%s) on linux\n\n", VERSION, date_git);

	printf("[Date: %s] %d task(s) left\n", date_now, remaining_tasks);
	printf("  [ ] Complete all tasks for today\n");
	printf("  [ ] Make new tasks for tomorrow\n");

	printf("Type \"task\" to list out all the tasks for today\n");
}

#endif