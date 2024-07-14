#include<unistd.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*range;
	int	len;

	if(start > end)
		len = (start - end) + 1;
	else
		len = (end - start) + 1;

	range = (int *)malloc(sizeof(int) * len);
	if(!range)
		return NULL;

	i = 0;
	while(len--)
	{
		range[i] = min;
		if(min < max)
			min++;
		else 
			min--;
	}
	return(range);
}
