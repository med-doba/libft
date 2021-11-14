/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:22:49 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/10 10:36:13 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (src[i] != '\0' && (i < (int)dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (i);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	char src[] = "mohammed";
	char dst[] = "eddobaji";
	printf("%zu", ft_strlcpy(dst, src, 0));
}*/
