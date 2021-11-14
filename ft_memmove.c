/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:48:00 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/13 04:46:30 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	char		*fd;
	const char	*fs;

	d = (char *) dst;
	s = (const char *) src;
	if (d > s)
		while (len--)
			*d++ = *s++;
	else
	{
		fs = s + (len - 1);
		fd = d + (len - 1);
		while (len--)
			*fd-- = *fs--;
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char dst[] = "moha eddo";
	const char src[] = "chakirahmad";
	printf("%s", memmove(dst, src, 10));
}*/
