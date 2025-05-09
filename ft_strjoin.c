/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:38:39 by tmarinho          #+#    #+#             */
/*   Updated: 2025/05/09 16:54:47 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		counter;
	char	*strjoin;

	counter = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	strjoin = malloc((lens1 + lens2) * sizeof(char) + 1);
	if (strjoin == NULL)
		return (NULL);
	while (s1[counter] != '\0')
	{
		strjoin[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (s2[counter] != '\0')
	{
		strjoin[lens1] = s2[counter];
		lens1++;
		counter++;
	}
	strjoin[lens1] = '\0';
	return (strjoin);
}
