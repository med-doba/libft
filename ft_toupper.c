/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:44:09 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/08 15:15:14 by med-doba         ###   ########.fr       */
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
    printf("%c -> %c", c, toupper(c));
    c = 'D';
    printf("\n%c -> %c", c, toupper(c));
    c = '9';
    printf("\n%c -> %c", c, toupper(c));
    return 0;
}*/
