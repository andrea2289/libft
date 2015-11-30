char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*str;

	if ([i] == NULL || f(i) == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

	

