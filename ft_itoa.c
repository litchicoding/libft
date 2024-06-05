/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvallee <luvallee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:23:17 by luvallee          #+#    #+#             */
/*   Updated: 2024/06/04 16:10:52 by luvallee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the number of digits in a given number.
 *
 * This function takes a long integer as input and returns the number of digits
 * in that number. It considers the sign of the number and includes the sign
 * digit in the count if the number is negative.
 *
 * @param nb The number which the len needs to be calculated.
 * @return The len of the digit.
 */
int	ft_nblen(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

/**
 * Converts an integer string.
 *
 * @param n The integer to be converted.
 * @return A pointer to the string of integer.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	long	len;
	char	*str;
	long	nb;

	len = ft_nblen(n);
	nb = n;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len] = '\0';
	while (len-- && nb != 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*Alloue et retourne une chaine de caracteres representant l'entier 'n'
 recu en argument. Les nombres negatifs doivent etre geres*/

// #include <stdio.h>
// int main()
// {
// 	char *n = ft_itoa(9);
//     printf("%s", n);
// 	free(n);
//     return (0);
// }
