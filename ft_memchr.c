/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:53:49 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/30 16:02:17 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	size_t			counter;

	str = (unsigned char *) s;
	chr = (unsigned char) c;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] == chr)
			return ((void *) &str[counter]);
		counter++;
	}
	return (NULL);
}
