/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:08:29 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/16 00:30:02 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int repetition(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != '\0' && str[i + 1] != c)
			j++;
		i++;
	}
	if (str[0] == c) 
		j--;
	return (j);
}

static char	*vidange(char **str, int block)
{
	while (str[block--])
		free(str);
	return (NULL);
}
char **how_str(char *s, char c)
{
	int	i;
	int	j;
	int l;
	char **ptr;

	i = 0;
	j = 0;
	l = 0;
	while (s[i])
	{
		while (s[i++] == c && s[i] != c)
			j++;
		if(i > 0)
		{
			ptr[l] = (char *)malloc(sizeof(char) * (j + 1));
			if (ptr == NULL)
				vidange(ptr, l);
			ft_memcpy(ptr, s, j);
			ptr[j] = 0;
			l++;
			ptr = ptr + j;
			j = 0;
		}
		else
			ptr = ptr + 1;
	}
	return (ptr);
}

char **ft_split(char const *s, char c)
{
	char	**str;
	int	i;

	i = repetition((char *)s, c);
	str = how_str((char *)s, c);
	str =(char **) malloc(sizeof(char *) * (i + 1));
	return (str);
}
#include <stdio.h>
int main (void)
{
	int i = 0;
	char c = 'j';
	char **tab;
		
	tab = ft_split("bonjour je m'appel Arthur", c);
	while (i < 25)
	{
		printf("%s\n",tab[i]);
	}
	return (0);
}
