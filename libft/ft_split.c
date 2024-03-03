/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:57:08 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/03 12:42:06 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must end
with a NULL pointer. 
You need to examine the string s and cut it into pieces every time you encounter
the delimiter character c.*/

#include "libft.h"

static int	count_words(char const *str, char c)
{
	size_t	count;
	int		i;
	int		word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (!word && str[i] != c)
		{
			word = 1;
			count++;
		}
		else if (word && str[i] == c)
			word = 0;
		i++;
	}
	return (count);
}

static char	*ft_strndup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **split, int limit)
{
	int	i;

	i = 0;
	while (i <= limit)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_strndup(s, index, i);
			if (!split[j - 1])
				return (free_split(split, --j), NULL);
			index = -1;
		}
	}
	split[j] = 0;
	return (split);
}
