/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:53:36 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/19 19:15:01 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	n;

	n = ft_strlen(s1) + 1;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, n);
	return (ptr);
}
/*#include <string.h>
#include <stdio.h>
int main ()
{
	char *eddo = "moha edo chak";
    printf("%s",strdup(eddo));
}*/
