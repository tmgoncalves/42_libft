/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:27:21 by tmarinho          #+#    #+#             */
/*   Updated: 2025/05/09 14:28:03 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_potential(int exp)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result = 10 * result;
		i++;
	}
	return (result);
}

int	ft_digit(const char *str)
{
	int	i;
	int	digits;

	digits = 0;
	if (str[0] == '-')
		i = 1;
	else
		i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1)
			digits++;
		else
			return (digits);
		i++;
	}
	return (digits);
}

int	ft_signal(const char *str, int number)
{
	if (str[0] == '-')
		return (number * -1);
	else
		return (number);
}

int	ft_number(const char *str, int counter, int digits, int exp)
{
	int	number;

	number = 0;
	while (counter < digits)
	{
		number = number + ((str[counter] - '0') * ft_potential(exp));
		counter++;
		exp--;
	}
	return (number);
}

int	ft_atoi(const char *str)
{
	int	counter;
	int	digits;
	int	number;
	int	exp;

	if (str[0] == '-')
	{
		counter = 1;
		digits = ft_digit(str) + 1;
	}
	else
	{
		counter = 0;
		digits = ft_digit(str);
	}
	exp = ft_digit(str) - 1;
	number = ft_number(str, counter, digits, exp);
	return (ft_signal(str, number));
}
