/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:32:58 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/21 20:32:35 by med-doba         ###   ########.fr       */
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

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	len = count * size;
	ptr = (void *) malloc (len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, len);
	return (ptr);
}
/*#include <stdio.h>
int main ()
{
	char *str;
	int i; 

	str = (char *)ft_calloc(100, sizeof(char));
	if (str == NULL)
		return (0);
	//str = (char *)malloc(100);
	i = 0;
	while( i < 99)
	{
		printf("|%s| \n" , NULL);
		i++;
	}
	return 0;	
}*/
