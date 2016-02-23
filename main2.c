#include <fcntl.h>
#include "get_next_line.h"
#include <stdio.h>
int main(int argc, char **argv)
{
	int fd;
	char *line;
	int ret;

	argc += 0;
	fd = open(argv[1], O_RDONLY);
	while (((ret = get_next_line(fd, &line)) > 0))
	{
		ft_putendl(line);
		free(line);
	}
	return (0);
}
