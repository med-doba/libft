/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:37:07 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/22 23:16:50 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	char			*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (char *)dst;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (n == 0)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*#include <string.h>
#include <stdio.h>
int main (void)
{
	char eddo[] = "moha eddo chak";
	char loco[] = "tonto";
	printf("%s", ft_memcpy(eddo, loco, 2));
}*/
