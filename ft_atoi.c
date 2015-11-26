int	ft_atoi(const char *str)
{
	int i;
	int number;
	int power;

	i = 0;
	number = 0;
	power = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		power = -power;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
			i++;
		}
		else
		return (number * power);
	}	
	return (number * power);
}
