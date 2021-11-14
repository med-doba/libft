/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:48:10 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/10 18:26:08 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	unsigned int	x;
	unsigned int	y;
	unsigned int	g;

	y = ft_strlen(s1);
	x = ft_strlen(s2);
	g = x + y;
	ptr = malloc(g);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, g);
	ft_strlcat(ptr, s2, g);
	return (ptr);
}
/*#include <stdio.h>
int main ()
{
	char s[] = "moha";
	char ss[] = "eddo";
	printf("%s", ft_strjoin(s, ss));
}*/
