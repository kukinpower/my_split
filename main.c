#include <stdio.h>

char			**my_split(char const *s, char c);

int	main()
{
	int i = 0;
	char *s = "Plese      split        this       !";
	char c = ' ';
	char **strarr = my_split(s, c);
	while (strarr[i])
	{
		printf("arr %d:\t%s\n", i, strarr[i]);
		i++;
	}
	printf("arr %d:\t%s\n", i, strarr[i]);
	return (0);
}