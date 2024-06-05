/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:49:47 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:05:45 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_isalpha() function tests if the character 'c' is an alpha character.
 *
 * @param c The character to test.
 * @return 1 if the character is alpha, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	if (ft_isalpha(114) == 0)
//         printf("error");
//     else
//         printf("im alpha");
// }
