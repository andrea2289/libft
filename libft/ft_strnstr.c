/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:04:27 by asalama           #+#    #+#             */
/*   Updated: 2015/11/27 19:04:24 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s2[0] == '\0')
		return ((char*)(s1));
	while (s1[i] != '\0' && i < n)
	{
		if (ft_strncmp((s1 + i), s2, ft_strlen(s2)) == 0)
			return ((char*)(&s1[i]));
		i++;
	}
	return (NULL);
}
