/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:28 by username          #+#    #+#             */
/*   Updated: 2026/10/22 15:04:50 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char c = 'a';
//     char upper = ft_toupper(c);
//     printf("letter: %c\n\nReal uppercase: %c\nMy uppercase: %c\n", c, toupper(c), upper);
//     return 0;
// }