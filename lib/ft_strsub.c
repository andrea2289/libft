/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:57:49 by asalama           #+#    #+#             */
/*   Updated: 2015/12/03 16:05:20 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	ret = (char*)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (ret == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		ret[i] = (char)s[start];
		start++;
		i++;
	}
	return (ret);
}
