#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*tmp;
	int	len;
	char	*s1b;

	i = 0;
	s1b = (char*)s1;
	len = ft_strlen(s1b) + 1;
	tmp = (char*)malloc((sizeof(char) * len));
	if ( tmp == NULL)
		return (NULL);
	while (s1b[i] != '\0')
	{
		tmp[i] = s1b[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);

}

char	*ft_reverse(char *s)
{
        int     i;
        int     max_len;
        char    tmp;

        i = 0;
        max_len = ft_strlen(s) - 1;
        while (i < max_len)
        {
                tmp = s[i];
                s[i] = s[max_len];
                s[max_len] = tmp;
                i++;
                max_len--;
        }
	return (s);
}

char	*ft_itoa(int n)
{
	char		s[12];
	char		*ret;
	unsigned int	nbr;
	int		i;

	i = 0;
	if (n < 0)
	{		
		s[i++] = '-';
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)(n);
	if (nbr == 0)
		s[i++] = '0';
	else
		while (nbr != 0)
		{
			s[i++] = (nbr % 10) + '0';
			nbr = nbr / 10;
		}
	s[i] = '\0';
	if (n < 0)
		ret = ft_reverse(s + 1);
	else
		ret = ft_reverse(s);
	ret = ft_strdup(s);
	return (ret);
}
	
int	main(void)
{
	printf("%s", ft_itoa(2147483647));
	printf("%s", ft_itoa(5026));
}
