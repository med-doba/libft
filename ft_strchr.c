/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:59:53 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/20 17:33:33 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>
int main () 
{
   const char str[] = "mohammed.eddo.chak.";
   const char ch = 'h';
   char *ret;
   ret = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}*/
