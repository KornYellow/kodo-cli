#ifndef UTILITY_H
#define UTILITY_H

#include <stdio.h>
#include <stdlib.h>

void get_date(char* str) {

	char read_content[100];
	FILE* file;
	file = fopen("timestmp", "r");

	if(file == NULL) {

		printf("[ERROR] get_date(): file \'timestmp\' not found.\n");
		exit(1);
	}

	fscanf(file, "%s", read_content);
	strcpy(str, read_content);

	fclose(file);
}

#endif