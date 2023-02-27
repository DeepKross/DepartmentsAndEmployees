#pragma once

#include <stdio.h>
#include "Master.h"
#include "Structures.h"

void printMaster(struct Master master)
{
	printf("Master\'s name: %s\n", master.name);
	printf("Master\'s status: %d\n", master.loc_id);
}

void printSlave(struct Slave slave, struct Master master)
{
	printf("Master: %s, %d scores\n", master.name, master.loc_id);
	printf("Name: %s %s\n", slave.first_name, slave.last_name);
	if (slave.sex == 1) {
		printf("Employee is woman\n");
	}
	else printf("Employee is man\n");
	printf("Employee\'s address: %s\n", slave.emp_address);
}