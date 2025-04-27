/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:07:36 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/27 18:15:50 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	chr;
	unsigned char	*str;
	size_t			counter;

	str = (unsigned char *) b;
	chr = (unsigned char) c;
	counter = 0;
	while (counter < len && str[counter] != '\0')
	{
		str[counter] = chr;
		counter++;
	}
	return ((void *)(str));
}
