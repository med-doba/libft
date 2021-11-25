/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:37:13 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/22 18:45:15 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		i;
	char	*hub;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	hub = NULL;
	i = 0;
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	j = ft_strlen(s1);
	while (j != 0 && ft_strchr(set, s1[j - 1]))
		j--;
	hub = malloc(sizeof(char) * (j + 1));
	if (hub == NULL)
		return (NULL);
	ft_memcpy (hub, s1, j);
	hub[j] = '\0';
	return (hub);
}
/*int main()
{
	char str[] = "         ";
	//char set[] = "k";
	printf("%s", ft_strtrim(str, " "));
}*/
