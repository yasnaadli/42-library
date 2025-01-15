/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:54:16 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:54:18 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dd;
	unsigned const char	*ss;

	dd = dest;
	ss = src;
	if (!dest && !src)
		return (0);
	if (dd < ss)
	{
		while (n--)
			*dd++ = *ss++;
	}
	else
	{
		while (n--)
			dd[n] = ss[n];
	}
	return (dest);
}
// #include<stdio.h>
// #include <string.h>

// int main()
// {
//     char src[] = "wow";
//     char dest[] = "hehe lol xdd";
// 	char src2[] = "wow";
//     char dest2[] = "hehe lol xdd";
//     size_t size = 3;

//     ft_memmove(dest, src, size);
// 	memmove(dest2, src2, size);

//     printf("%s", dest);
// 	printf("|| %s", dest2);
// }