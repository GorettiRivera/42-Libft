/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 13:29:23 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/07 15:09:49 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	str = (char *)malloc(sizeof(*str) * (len + 1));
	while (i <= len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
