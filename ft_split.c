/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:56:22 by yamohamm          #+#    #+#             */
/*   Updated: 2024/11/27 17:27:16 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split)
{
	int	i;	

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
	*split = NULL;
}

static int	countwords(const char *str, char c)
{
	int	count;
	int	in_word;
	int	i;

	in_word = 0;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*cpystr(const char *s, int j, int i)
{
	char	*tab;
	int		k;

	tab = malloc(i - j + 1);
	if (!tab)
		return (NULL);
	k = 0;
	while (j < i)
	{
		tab[k++] = s[j++];
	}
	tab[k] = '\0';
	return (tab);
}

static char	**assign_strings(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	mover;

	i = 0;
	j = 0;
	mover = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			tab[mover] = cpystr(s, j, i);
			if (!tab[mover])
				return (free_split(tab), NULL);
			mover++;
		}
		else
			i++;
	}
	tab[mover] = NULL;
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = assign_strings(tab, s, c);
	return (tab);
}

// int	main(void)
// {
// 	int		i;
// 	char	**tab;

// 	i = 0;
// 	tab = ft_split(	"^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		free(tab[i]);
// 		i++;
// 	}
// 	free(tab);
// }
