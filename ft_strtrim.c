/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniec <wdaniec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 19:08:30 by wdaniec           #+#    #+#             */
/*   Updated: 2024/03/17 17:45:08 by wdaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char a, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	new_string = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		new_string[i++] = s1[start++];
	}
	new_string[i] = '\0';
	return (new_string);
}
