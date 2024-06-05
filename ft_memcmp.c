/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:50:15 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:14:22 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the first n bytes of two memory areas (interpreted as an
 * unsigned char pointer).
 *
 * @param s1 The pointer to the first memory area.
 * @param s2 The pointer to the second memory area.
 * @param n The number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first
 * n bytes of s1 are found, respectively, to be less than, to match, or be
 * greater than the first n bytes of s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("%d \n", ft_memcmp("0", "1", sizeof(char) * 6));
//     printf("%d", memcmp("0", "1", sizeof(char) * 6));
//     return (0);
// }
