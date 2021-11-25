/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:44:09 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/18 23:57:21 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>
int main() 
{
    char c;
    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));
    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
}*/
