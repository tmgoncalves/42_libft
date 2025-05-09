/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:15:22 by tmarinho          #+#    #+#             */
/*   Updated: 2025/05/09 18:38:44 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digits(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
		n = n * -1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

int	ft_signal(int n)
{
	if (n >= 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	int		chr;
	int		signal;
	char	*strnumber;

	if (n >= 0)
		chr = ft_digits(n);
	else
		chr = ft_digits(n) + 1;
	strnumber = malloc(chr * sizeof(char) + 1);
	signal = ft_signal(n);
	if (strnumber == NULL)
		return (NULL);
	if (n < 0)
		n = n * -1;
	strnumber[chr] = '\0';
	chr--;
	while (chr > -1)
	{
		strnumber[chr] = (n % 10) + '0';
		n = n / 10;
		chr--;
	}
	if (signal == 0)
		strnumber[0] = '-';
	return (strnumber);
}
