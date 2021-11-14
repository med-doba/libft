/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:32:58 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/09 18:27:34 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:53:53 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/09 17:10:01 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = count * size;
	ptr = (void *) malloc (len);
	ft_bzero (ptr, len);
	return (ptr);
}
/*#include <stdio.h>
int main ()
{
	char *str;

	// str = (char *)ft_calloc(100, sizeof(char));
	str = (char *)malloc(100);
	for(int i = 0; i < 99; i++)
	{
		printf("|%d| \n" , str[i]);
	}
	return 0;
	
}*/
