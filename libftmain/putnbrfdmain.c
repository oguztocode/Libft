#include <unistd.h>
#include <fcntl.h>
 
int main(void)
{
    int filedesc = open("fdtest4.txt", O_WRONLY | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }
 
    ft_putnbr_fd(1, filedesc);
 
    return 0;
}
