/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:48:00 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/21 18:31:51 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	if (!d && !s)
		return (NULL);
	if (s <= d)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char dst[] = "moha eddo";
	char src[] = "chakirahmad";
	ft_memmove(dst, src, 15);
	printf("%s", dst);
}*/
