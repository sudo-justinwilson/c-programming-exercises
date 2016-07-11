#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int creat(const char *pathname, mode_t mode);
const char *pathname = "/home/justin/workspace/C-Programming/test-open.tmp";
mode_t mode = 0644;
int fd = 0;

int main()
{
	creat (	*pathname, O_CREAT, mode)

	if ( fd == -1 )
			perror ( creat: );
}


