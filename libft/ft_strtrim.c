/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:13:53 by asalama           #+#    #+#             */
/*   Updated: 2015/12/01 19:40:09 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*ret;
	int		max_len;
	int		k;

	k = 0;
	i = 0;
	max_len = ft_strlen(s + 1);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[max_len] == ' ' || s[max_len] == '\n' || s[max_len] == '\t')
		max_len--;
	if (s[i] != '\0')
		return (ft_strdup(s));
	ret = (char*)malloc(sizeof(char) * (ft_strlen(s) - (i + max_len)));
	if (ret == NULL)
		return (NULL);
	if (s[i] != '\0' && i < (ft_strlen(s) - (ft_strlen(s) + max_len)))
	{
		ret[k] = s[i];
		i++;
		k++;
	}
	ret[k] = 0;
	return (ret);
}
