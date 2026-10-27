/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:16:13 by username         #+#    #+#              */
/*   Updated: 2026/10/27 18:33:42 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!dest)
		return (NULL);
	dest = ft_memcpy(dest, s, ft_strlen(s) + 1);
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*original = "Hello, World!";
// 	char		*duplicate = ft_strdup(original);

// 	if (duplicate == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Duplicate: %s\n", duplicate);
// 	free(duplicate);
// 	return (0);
// }
