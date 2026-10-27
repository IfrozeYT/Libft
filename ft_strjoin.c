/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:55:02 by username          #+#    #+#             */
/*   Updated: 2026/10/27 18:55:03 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	size_t	i;
	size_t	j;

	str_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_join)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		str_join[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		str_join[i] = s2[j];
		i++;
		j++;
	}
	str_join[i] = '\0';
	return (str_join);
}
