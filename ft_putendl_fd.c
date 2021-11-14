/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:24:14 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/11 14:56:25 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	char	eof;

	eof = '\0';
	ft_putstr_fd(s, fd);
	write(fd, &eof, 1);
}
/*int main ()
{
	char str[] = "mohammed eddobaji ljdgsk54354";
	ft_putendl_fd(str, 1);
}*/
