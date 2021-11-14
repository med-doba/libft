/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:49:30 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/07 19:38:54 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	f;

	i = 0;
	nb = 1;
	f = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nb *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		f = (f * 10) + str[i] - 48;
		i++;
	}
	return (f * nb);
}
/*
#include <stdio.h>
int main ()
{
	char str[] = "-+123";
    int val = ft_atoi(str);
    printf("%d ", val);
    return 0;
}*/
