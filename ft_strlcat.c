/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:57:45 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:57:48 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	out;

	i = ft_strlen(dst);
	k = ft_strlen(src);
	out = 0;
	if (!dst && !size)
		return (i);
	if (i > size)
		i = size;
	if (i == size)
		return (size + k);
	out = i + k;
	k = 0;
	while (src[k] != '\0' && i + k + 1 < size)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (out);
}

// #include<stdio.h>
// int main()
// {
//     char dst[10];
//     char src[] = "lorem ipsum dolor sit amet";
//     size_t size = 0;
//     size_t out = ft_strlcat(dst, src, size);
//     printf("dest is '%s', src is '%s', size is 
//'%zu', out is '%zu'\n", dst, src, size, out);
// }