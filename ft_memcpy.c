/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:38:03 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/30 19:03:17 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*u_dst;
	unsigned char	*u_src;
	size_t			counter;

	u_dst = (unsigned char *) dst;
	u_src = (unsigned char *) src;
	counter = 0;
	while (counter < n)
	{
		u_dst[counter] = u_src[counter];
		counter++;
	}
	u_dst[counter] = '\0';
	return ((void *) u_src);
}
