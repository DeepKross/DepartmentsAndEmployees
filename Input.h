#pragma once
#include <stdio.h>
#include <string.h>
#include "Structures.h"
#include "Master.h"

void readMaster(struct Master* master)
{
	char name[16];
	int loc_id;

	name[0] = '\0';

	printf("Enter department\'s name: ");
	scanf("%s", name);

	strcpy(master->name, name);

	printf("Enter department\'s id of it\'s location: ");
	scanf("%d", &loc_id);

	master->loc_id = loc_id;
}

void readSlave(struct Slave* slave)
{
	char fname[15];
	char lname[15];
	int sex;
	char emp_address[30];

	printf("Enter first name of employee: ");
	scanf("%s", &fname);

	strcpy(slave->first_name, fname);

	printf("Enter last name of employee: ");
	scanf("%s", &lname);

	strcpy(slave->last_name, lname);

	printf("Enter [0] if empl is man and [1] if woman: ");
	scanf("%d", &sex);

	slave->sex = sex;

	printf("Enter address of employee: ");
	scanf("%s", &emp_address);

	strcpy(slave->emp_address, emp_address);
}