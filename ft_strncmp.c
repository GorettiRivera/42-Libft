/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:03:42 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/22 10:44:34 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char*)s1;
	s4 = (unsigned char*)s2;
	while ((s3[i] || s4[i]) != 0 && i < n)
	{
		if (s3[i] == s4[i])
		{
			i++;
		}
		else
			return (s3[i] - s4[i]);
	}
	return (0);
}
