/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:49:58 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:06:35 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/**
 * The ft_isdigit() function tests if the character 'c' is a digit.
 *
 * @param c The character to test.
 * @return 1 if the character is digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	if (ft_isdigit(47) == 0)
//         printf("you are fucking wrong");
//     else
//         printf("je am digit");
// }
