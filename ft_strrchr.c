/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniec <wdaniec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:28:59 by wdaniec           #+#    #+#             */
/*   Updated: 2024/03/17 17:42:46 by wdaniec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*result;
	char			cc;

	cc = (char) c;
	result = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
		{
			result = (char *) &s[i];
		}
		i++;
	}
	if (s[i] == c)
		result = (char *) &s[i];
	return (result);
}
