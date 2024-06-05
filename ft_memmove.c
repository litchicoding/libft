/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:50:25 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:17:56 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function copies a block of memory from a source address to a
 * destination address.
 * It handles overlapping memory regions correctly by using a temporary buffer.
 *
 * @param dest The pointer to the destination address where the memory will be
 * copied to.
 * @param src The pointer to the source address where the memory will be
 * copied from.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination address.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_temp;
	unsigned char	*src_temp;

	if (dest == 0 && src == 0)
		return (NULL);
	if (src > dest)
	{
		dest_temp = ft_memcpy(dest, src, n);
		return (dest_temp);
	}
	else
	{
		dest_temp = (unsigned char *)dest;
		src_temp = (unsigned char *)src;
		while (n > 0)
		{
			dest_temp[n - 1] = src_temp[n - 1];
			n--;
		}
		return (dest_temp);
	}
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char buffer[5];
//     char buffer2[5];
//     ft_memmove(buffer, "nuts", sizeof(char) * 5);
//     memmove(buffer2, "nuts", sizeof(char) * 5);
//     for(int i = 0; i < 5; i++)
//         printf("%c", buffer[i]);
//     printf("\n");
//     for(int i = 0; i < 5; i++)
//         printf("%c", buffer[i]);
//     return (0);
// }
