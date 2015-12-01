/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 14:01:32 by asalama           #+#    #+#             */
/*   Updated: 2015/12/01 19:28:33 by asalama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ret;
	
	i = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));

	if (ret == NULL)
		return (NULL);
	while (s1[i] != '\0' && s2[i] != '\0')
		ft_strcpy(ret, (char *)(s1));
   		ft_strcat(ret, s2);	
	return (ret);
}
