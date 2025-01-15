/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:57:55 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:58:03 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_length;
	size_t	i;

	src_length = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_length);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "hehe";
//     char dest[30];
//     size_t size = 0;
//     printf("dest is '%s', src is '%s', size is '%zu'\n", dest, src, size);
//     size_t out = ft_strlcpy(dest, src, size);
//     printf("dest is '%s', src is '%s', size is '%zu', 
// out is '%zu'\n", dest, src, size, out);
// }
