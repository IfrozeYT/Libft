/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 15:21:11 by username         #+#    #+#              */
/*   Updated: 2026/10/27 18:31:40 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;

	if (size && nmemb > (((size_t) - 1) / size))
		return (NULL);
	a = malloc(size * nmemb);
	if (!a)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	size_t	nmemb = 5;
// 	size_t	size = sizeof(int);
// 	int		*arr = (int *) ft_calloc(nmemb, size);
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < nmemb; i++)
// 	{
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
