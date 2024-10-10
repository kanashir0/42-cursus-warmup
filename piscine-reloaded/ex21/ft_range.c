#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	ptr = NULL;
	if (min >= max)
		return (ptr);
	ptr = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (max > min)
	{
		max--;
		ptr[i] = max;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	int *arr;
	int i;
	int min;
	int max;

	min = -5;
	max = 20;
	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
