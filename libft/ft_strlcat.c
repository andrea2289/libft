/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:11:05 by asalama           #+#    #+#             */
/*   Updated: 2015/11/25 20:04:26 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;

	i = 0;
	size--;
	while (dst[i] != '\0')
	{
		i++;
		size--;
	}
	while (*src != '\0' && size != 0)
	{
		dst[i] = *(src++);
		i++;
		size--;
	}
	return (size);
}
