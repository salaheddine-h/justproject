


#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	tab[256] = {0};
	unsigned char c;

	i = 0;
	if(argc == 3)
	{
		while(argv[2][i] != '\0')
		{
			c = argv[2][i];
			tab[c] = 1;
			i++;
		}
		i = 0;
		while(argv[1][i] != '\0')
		{
			c = argv[1][i];
			if(tab[c] == 1)
			{
				write(1, &c, 1);
				tab[c] = 0;
				c++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
