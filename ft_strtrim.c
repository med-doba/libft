/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:37:13 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/12 21:07:03 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	j;
	int	i;
	int	c;

	j = ft_strlen(s1) - 1;
	c = 0;
	if (!s1)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
	{
		j--;
		c++;
	}
	return (ft_substr(s1, i, (ft_strlen(s1) - i - c)));
}
/*#include <stdio.h>
int main ()
{
	char str[] = "j";
	char set[] = "ab";
	printf("%s", ft_strtrim(str, set));
}*/
