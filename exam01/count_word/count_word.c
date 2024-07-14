#include<stdio.h>

char	count_word(char *str)
{
	int	i;
	int	wa;

	i = 0;
	wa = 0;
	{
		while(str[i] != '\0')
		{
			while(str[i] == 32 || str[i] == '\t')
				i++;
			if(str[i] >= 33 && str[i] <= 126)
			{
				wa++;
			}
			while(str[i] >= 33 && str[i] <= 126)
				i++;
		}
	}
	return(wa);
}

int	main(void)
{
	char	stt[] = "   kf kf  jdj jdj djd jdjd jdjd jdjd    ";

	printf("%d", count_word(stt));
	return(0);
}
