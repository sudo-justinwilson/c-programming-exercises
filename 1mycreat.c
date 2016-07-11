#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int creat (const char *name, mode_t mode);

int main()
{
		int fd;

		fd = creat ( "/home/justin/workspace/C-Programming/test-open.tmp", 0644 );

		if ( fd == -1 )
				perror( creat);
		printf ( "fd equals: \t %d \n", fd);
}
