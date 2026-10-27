/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:21:11 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:49:09 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*a;

	a = malloc(size * nmemb);
	if (a == 0)
		return (0);
	ft_bzero(a, nmemb * size);
	return (a);
}

// #include <stdio.h>

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
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }
