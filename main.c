#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	DIR *dirp = opendir("./");
	struct dirent *item;

	while (item = readdir(dirp))
	{
		if (item->d_name[0] != '.')
			printf("%s  ", item->d_name);
	}
	printf("\n");

	closedir(dirp);
}
