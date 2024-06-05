/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:59:39 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:12:38 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of the character 'c' (interpreted as an
 * unsigned char) in the first 'n' bytes of the memory area pointed to by 's'.
 *
 * @param s - Pointer to the memory area to be searched.
 * @param c - Character to be located.
 * @param n - Number of bytes to be searched.
 * @return A pointer to the first occurrence of 'c' in the memory area pointed
 *         to by 's', or NULL if the character is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char data[];
// 	data = ft_memchr("bonjour", 'j', 6);
// 	printf("%c",data[0]);
// 	return (0);
// }