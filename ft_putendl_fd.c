/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:24:14 by med-doba          #+#    #+#             */
/*   Updated: 2021/11/20 20:31:14 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	char	eof;

	eof = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &eof, 1);
}
/*#include <fcntl.h>
int main()
{
	int fd;
	char str[100]="tesst";
	fd = open ("file",O_CREAT|  O_RDWR);
   ft_putendl_fd(str,fd);
}*/
