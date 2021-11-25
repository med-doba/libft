/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:44:04 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/21 20:36:29 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (ft_strchr(s, c))
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "moha eddo chak";
   const char ch = 'm';
   char *ret;
   ret = ft_strrchr(str, ch);
   printf("|%s|\n", strrchr(str, ch));
   printf("|%s|\n", ret);
   return(0);
}*/
