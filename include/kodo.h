#ifndef KODO_H
#define KODO_H

#include <stdio.h>
#include <stdbool.h>

#include "output.h"

void get_help() {

	printf("  \"task\" : list out all the tasks for today\n");
	printf("  \"done\" : mark the task that you have done\n");
	printf("  \"edit\" : edit task list for today\n");
	printf("  \"new\"  : make new task list for tomorrow\n");
}

void get_lost() {

	printf("Type \"help\" or \"exit\" to exit\n");
}

void run() {

	greet();

	while(true) {

		char prmpt[32];
		prompt(prmpt);

		if(strcmp(prmpt, "help\n") == 0) get_help();
		else if(strcmp(prmpt, "exit\n") == 0) break;
		else get_lost();
	}
}

#endif