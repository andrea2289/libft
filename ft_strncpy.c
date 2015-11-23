include <string.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char 	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (len < n)
	{
		while (dest[i])		
		{
			dest[i] = '\0';
			i++;
		}
	}	
	return (dest);
}
