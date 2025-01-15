/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:55:04 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:55:07 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (c >= 0 && c <= 127)
		write(fd, &c, 1);
}
// int main()
// {
// 	int fd = open("test", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('a', fd);
// }