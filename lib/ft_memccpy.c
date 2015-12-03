/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:46:33 by asalama           #+#    #+#             */
/*   Updated: 2015/11/27 12:13:29 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	i = 0;
	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	while ((src2[i]) != '\0' || i < n)
	{
		if ((src2[i]) == (unsigned char)(c))
			return (dst2 + i + 1);
		(dst2[i] = src2[i]);
		i++;
	}
	return (NULL);
}
