/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:26:57 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/09 12:02:39 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[x])
		{
			while (i + x < len && haystack[i + x] == needle[x])
			{
				x++;
				if (!needle[x])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	char str[] = "moha eddo chak";
	char find[] = "";
	printf("%s", ft_strnstr(str, find, 16));
}*/
