#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int     main(int ac, char **av)
{
	int     fd;
	int     fd2;
	char    *line;
	int		i;

	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd, &line);
	ft_putendl(line);
	free(line);
	i = get_next_line((int const)fd2, &line);
	ft_putendl(line);
	free(line);
	getchar();
	return (1);
}
