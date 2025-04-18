#include "libft.h"


char *ft_get_next_line(int fd)
{
    static char buf[BUFFER_SIZE];
    char line[1000000];
    static int bufread;
    static int bufpose;
    int i;

    i = 0;
    while (1)
    {   
        if (bufread == bufpose)
        {
            bufread = read(fd, buf, BUFFER_SIZE);
            bufpose = 0;
            if (!bufread)
                break;
            buf[bufread] = '\0';
        }
        line[i++] = buf[bufpose++];
        if (buf[bufpose-1] == '\n')
            break;
    }
    line[i] = '\0';
    return (ft_strdup(line));
}
