#include<unistd.h>
#include<stdlib.h>

char *ft_strdup( const char * src)
{
	char *dest;
	size_t	len;
	size_t	i;

	len = 0;
	while(src[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * (len + 1));
		if(!dest)
		{
			return(NULL);
		}
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
