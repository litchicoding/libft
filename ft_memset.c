/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:06:09 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:20:55 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a block of memory with a specified value.
 *
 * @param s Pointer to the memory block to be filled.
 * @param c Value to be set. The value is passed as an int, but the function
 * fills the block of memory using the char conversion of this value.
 * @param n Number of bytes to be set to the value.
 * @return Pointer to the memory block `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = (char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *buffer[10];
// 	char *buffer2[10];
// 	printf("%s \n", (char *)ft_memset(buffer, 115, sizeof(char) * 5));
// 	printf("%s", (char *) memset(buffer2, 115, sizeof(char) * 5));

// 	return (0);
// }
