/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 17:11:13 by username         #+#    #+#              */
/*   Updated: 2026/10/24 19:12:36 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = s;
	while (n != 0)
	{
		*c = 0;
		c++;
		n--;
	}
}

// #include <stdio.h>
// #include <unistd.h>

// // int main(void)
// {
// 	char str[] = "not quite my tempo";

// 	write(1, "1er test: \n", 12);
// 	printf("\n");
// 	printf("Before bzero: %s\n", str);
// 	ft_bzero(str, 10);
// 	printf("After bzero: %s\n", str + 10);
// 	printf("\n");
// 	write(1, "2eme test: \n", 12);
// 	printf("\n");

// 	char str1[] = "am i rushing ?";

// 	printf("Before bzero: %s\n", str1);
// 	ft_bzero(str1, 5);
// 	printf("After bzero: %s\n", str1 + 5);

// 	return 0;
// }
