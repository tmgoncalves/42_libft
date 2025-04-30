/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:57:27 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/30 15:52:59 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{

}*/

int	main()
{
	char txt1[] = "eh o coringao";
	char txt2[5];

	memmove(txt2, txt1, 5);
	printf("%s\n", memchr(txt1, 'i', 10));

	printf("txt1: %s\n", txt1);
	printf("txt2: %s\n", txt2);

}
