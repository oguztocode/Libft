#include <unistd.h>
#include <fcntl.h>
 
int main(void)
{
    int filedesc = open("fdtest3.txt", O_WRONLY | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }
 
	char ab[] = "erdem";

   	ft_putendl_fd(ab, filedesc);
 
    return 0;
}

