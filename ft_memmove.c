/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:57:27 by tmarinho          #+#    #+#             */
/*   Updated: 2025/05/04 20:05:12 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{

}*/

int	main()
{
	char txt1[] = "eh o coringao";

	memmove(txt1, txt1 + 5, 8);

	txt1[8] = '\0';

	printf("txt1: %s\n", txt1);

}
