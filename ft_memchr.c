/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:19:15 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/13 04:45:18 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char		*src;

	i = 0;
	src = (const char *) s;
	while (src[i] != '\0' && i < n)
	{
		if (src[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main ()
{
	char str[] = "mohammed";
	char *eddo = ft_memchr(str, 'h', 6);
	printf("%s", eddo);
}*/
