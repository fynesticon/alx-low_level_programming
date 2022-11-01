#include <stdio.h>
#include "main.h"

/*void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);*/

/**
  *check_elf - checks if a file is an ELF file.
  *@e_ident: a pointer to an array containing the ELF magis number
  *Description: if the file is not ELF file exit 98
  */
/*void check_elf(unsigned char *e_ident)
{
	int index;
	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not an ELF file\n");
			exit(98);
		}
	}
}*/

/**
 * main - The entry point for program to get header of ELF file
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 on success, error code on failure
 */
<<<<<<< HEAD
=======

void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints osabi
 * @ptr: magic.
 * Return: no return.
 */

void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", ptr[8]);
}

/**
 * print_version - prints version
 * @ptr: magic.
 * Return: no return.
 */

void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_data - prints data
 * @ptr: magic.
 * Return: no return.
 *

void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}

 *
 * print_magic - prints magic info.
 * @ptr: magic.
 * Return: no return.
 */

/**
 * void print_magic(char *ptr)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", ptr[bytes]);

	printf("\n");

}

**
 * check_sys - check the version system.
 * @ptr: magic.
 * Return: no return.
 *

void check_sys(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

 *
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 *

int check_elf(char *ptr)
{
	int addr = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

 *
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */

>>>>>>> 542d610845794d2bd764082c735eef7d02545c6a
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
