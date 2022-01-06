#ifndef UTILITY_H
#define UTILITY_H

#include <stdio.h>
#include <stdlib.h>

void get_date_now(char *str) {

	time_t date;
    time(&date);
    char buffer[sizeof("2022-01-01")];
    strftime(buffer, sizeof(buffer), "%F", gmtime(&date));
	strcpy(str, buffer);
}
void get_date_from_git(char *str) {

	FILE *file;
	file = fopen("timestmp", "r");

	if(file == NULL) {

		printf("[ERROR] get_date(): file \'timestmp\' not found.\n");
		exit(1);
	}

	char day[10];
	char month[10];
	char date[10];
	char time[10];
	char year[10];
	char timezone[10];
	fscanf(file, "%s %s %s %s %s %s", day, month, date, time, year, timezone);

	strcat(month, " ");
	strcat(month, date);
	strcat(month, " ");
	strcat(month, year);
	strcat(month, ", ");
	strcat(month, time);

	strcpy(str, month);
	fclose(file);
}
void prompt(char *str) {

	printf(">>> ");

	char buffer[32];
	fgets(buffer, 32, stdin);
	strcpy(str, buffer);
}

#endif