#include <stdio.h>
#include <unistd.h>

char	**ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	char *str = argv[1];
	char *charset = argv[2];

	char **strs;
	strs = ft_split(str, charset);

	int i = 0;
	while(strs[i] != 0)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}
