/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:54:21 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/10 13:31:42 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dst[x] != '\0')
		x++;
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i + x] = src[i];
		i++;
	}
	dst[i + x] = '\0';
	return (i + x);
}
/*
int main ()
{
	char dst[] = "moha";
	char src[] = "eddo";
	printf("dyalhom%zu \n dyali %zu",strlcat(dst,src,4) ,ft_strlcat(dst, src, 4));
}*/
