#include<unistd.h>
/*
int	count_word(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while(str[i] != '\0')
	{
		while(str[i] == 32 || str[i] == '\t')
			i++;
		if(str[i] >= 33 && str[i] <= 126)
		{
			word++;
		}
		while(str[i] >= 33 && str[i] <= 126)
			i++;
	}
	return(word);
}*/

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
		/*	if(count_word(&argv[1][i]) >= 'a' && count_word(&argv[1][i]) <= 'z')
			{
				argv[1][i] = argv[1][i] + 32;
				write(1, &argv[1][i], 1);
			}	
			else if(count_word(&argv[1][i]) >= 'A' && count_word(&argv[1][i]) <= 'Z')
			{
				argv[1][i] = argv[1][i] - 32;
				write(1, &argv[1][i], 1);
			}
			else 
				write(1, &argv[1][i], 1);
		*/
	/*		if((argv[1][i] != 32 && argv[1][i] != '\t') && (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				argv[1][i] = argv[1][i] - 32;
				write(1, &argv[1][i], 1);
			}
			*/
			if(argv[1][i-1] == 32 || argv[1][i-1] == '\t')
			{
				argv[1][i] = argv[1][i] - 32;
				write(1, &argv[1][i], 1);
			}
			else 
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
