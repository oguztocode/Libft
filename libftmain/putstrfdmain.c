#include <unistd.h>
#include <fcntl.h>
 
int main(void)
{
    int filedesc = open("fdtest2.txt", O_WRONLY | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }

	char	ab[] = "erdem";
 
    ft_putstr_fd(ab, filedesc);
 
    return 0;
}
