/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:20:43 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/09 17:40:44 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n--)
		*p++ = 0;
}

/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char str[]= "mohammed";
	ft_bzero(str + 4, 5);
	printf("%s", str);
}
*/