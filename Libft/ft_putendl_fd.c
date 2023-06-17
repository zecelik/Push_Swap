#include "../push_swap/push_swap.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
    creat("test.txt", O_CREAT | S_IRWXU);
	int	fd = open ("test.txt", O_WRONLY | O_APPEND);
    char s[] = "selam";
	ft_putendl_fd(s,fd);
    ft_putendl_fd(s,fd);
}
*/
