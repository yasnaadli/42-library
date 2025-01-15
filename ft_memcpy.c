/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:52:58 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:53:01 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
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

//     ft_memcpy(dest, src, size);
// 	memcpy(dest2, src2, size);

//     printf("%s", dest);
// 	printf("|| %s", dest2);
// }