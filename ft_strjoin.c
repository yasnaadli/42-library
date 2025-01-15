/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:57:06 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:57:08 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*out;

	i = ft_strlen(s1);
	k = ft_strlen(s2);
	out = malloc(sizeof(char) * (i + k) + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		out[i] = s2[k];
		i++;
		k++;
	}
	out[i] = '\0';
	return (out);
}
// #include <stdio.h>
// int main()
// {
//     char const *s1 = "xdd";
//     char const *s2 = "lol";
//     char *out = ft_strjoin(s1, s2);
//     printf("%s", out);
// }