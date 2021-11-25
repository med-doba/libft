/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:51:32 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/18 23:58:24 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>
int main()
{
    char c;
    c = 'm';
    printf("%c -> %c", c, ft_tolower(c));
    c = 'D';
    printf("\n%c -> %c", c, ft_tolower(c));
    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));
    return 0;
}*/
