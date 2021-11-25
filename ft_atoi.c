/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:49:30 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/21 20:26:17 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	j;
	int	nb;
	int	f;

	j = 0;
	nb = 1;
	f = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n'
		|| str[j] == '\r' || str[j] == '\v' || str[j] == '\f')
		j++;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			nb *= -1;
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		f = (f * 10) + str[j] - 48;
		j++;
	}
	return (f * nb);
}
/*#include <stdlib.h>
#include <stdio.h>
int main ()
{
	char str[] = "2018";
    int val = ft_atoi(str);
    printf("%d", val);
    return 0;
}*/
