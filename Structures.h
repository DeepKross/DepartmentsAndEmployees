#pragma once

/*
"Structures.h": master (supplier), product (detail), slave (supplement), indexer.
*/

struct Master
{
	int id;
	char name[16];
	int loc_id;
	long firstSlaveAddress;
	int slavesCount;
};

struct Slave
{
	int masterId;
	int productId;
	char first_name[15];
	char last_name[15];
	int sex;
	char emp_address[30];
	int exists;
	long selfAddress;
	long nextAddress;
};

struct Indexer
{
	int id;	
	int address;
	int exists;
};