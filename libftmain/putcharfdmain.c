#include <unistd.h>
#include <fcntl.h>
 
int main(void)
{
    int filedesc = open("fdtest.txt", O_WRONLY | O_APPEND);
 
    if (filedesc < 0) {
        return -1;
    }
 
    ft_putchar_fd('c', filedesc);
 
    return 0;
}
