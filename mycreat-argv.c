#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int creat ( const char *name, mode_t mode);

int main (int argc, char *argv[])
{
	
	char *usage = "usage: Expected one argument";
	int fd;
	char *path;

	if ( argc < 2 )
			printf ( " %s \n", usage);
			return -1;

	fd = creat ( argv[2], 0644);
	if ( fd = -1 )
	{
		perror ( "creat");
		return -1;
	}
	else
	printf ( "fd equals: \t %d \n", fd);
}
	

			
