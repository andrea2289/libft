/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:10:03 by asalama           #+#    #+#             */
/*   Updated: 2015/12/03 20:39:29 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static	int	ft_wstart(int j, char const *s, char c)
{
	int i;
	int number;

	i = 0;
	number = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' || s[i] != c)
			number++;
		if (number == j)
			return (i);
	}
	return (0);
}

static int	ft_wnum(char const *s, char c)
{
	int	number;
	int	i;

	i = 0;
	number = 0;
	if (s[i] != c && s[i] != '\0')
		number++;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i - 1] == c && s[i] != c)
			number++;
		i++;
	}
	return (number);
}

static int	ft_wlen(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			count++;
		}
		if (count)
			return (count);
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		word_number;
	int		i;
	int		j;

	ret = (char**)malloc(sizeof(char *) * (ft_wnum((const char *)(s), c) + 1));
	i = 0;
	j = 0;
	word_number = ft_wnum((const char*)(s), c);
	if (ret == NULL)
		return (NULL);
	while (word_number)
	{
		while (s[i] == c && s[i] != '\0')
				i++;
		ret[j] = ft_strsub((const char *)(s), ft_wstart(j, s, c), ft_wlen((char *)(s), c));
		if (ret == NULL)
			return (NULL);
		j++;
		word_number--;	
	}
	ret[j] = NULL;
	return (ret);
}

/*int		main(void)
{
   	int 		i;
	char 	**tab;
	
	i = 0;
	tab =  ft_strsplit("fraise  pomme banane", ' ');
	while (tab[i] != NULL)
	{
		printf("[%s]\n", tab[i]);
		i++;
	}
  return (0);
}
*/
