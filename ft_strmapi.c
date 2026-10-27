/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:57:56 by username          #+#    #+#             */
/*   Updated: 2026/10/27 18:57:58 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_ret;

	str_ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str_ret)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str_ret[i] = (*f)(i, s[i]);
		i++;
	}
	str_ret[i] = '\0';
	return (str_ret);
}
