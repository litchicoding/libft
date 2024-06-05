/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:08:11 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:16:11 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory from a source address to a destination address.
 *
 * @param dest The pointer to the destination address where the memory will be
 * copied to.
 * @param src The pointer to the source address from where the memory will be
 * copied.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination address.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[8];
// 	char dest2[8];
// 	ft_memcpy(dest, "brioche", sizeof(char) * 7);
// 	memcpy(dest2, "brioche", sizeof(char) * 7);
// 	for(int i = 0; i < 8; i++)
// 	{
// 		printf("%c", dest[i]);
// 	}
// 	printf("\n");
// 	for(int i = 0; i < 8; i++)
// 	{
// 		printf("%c", dest2[i]);
// 	}
// 	return (0);
// }
