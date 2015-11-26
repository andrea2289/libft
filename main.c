#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf("%d", atoi("a"));
	printf(" %d\n", ft_atoi("a"));
	printf("%d", atoi("+123"));
	printf(" %d\n", ft_atoi("+123"));
	printf("%d", atoi("-ad3"));
	printf(" %d\n", ft_atoi("-ad3"));
	printf("%d", atoi("-1a2"));	
	printf(" %d\n", ft_atoi("-1a2"));
	printf("%d", atoi("-2147483647"));
	printf(" %d\n", ft_atoi("-2147483647"));
return (0);
}
