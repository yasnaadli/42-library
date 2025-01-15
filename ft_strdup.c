/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:56:43 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/26 22:56:46 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*out;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	out = malloc(sizeof(char) * i + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
// #include<stdio.h>
// int main()
// {
//     char p[] = "hehee";
//     char *out = ft_strdup(p);
//     printf("%s", out);
// }