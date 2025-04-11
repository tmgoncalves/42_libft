/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarinho <tmarinho@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:45:05 by tmarinho          #+#    #+#             */
/*   Updated: 2025/04/11 17:20:48 by tmarinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	while (counter > -1)
	{
		if (s[counter] == c)
			return ((char *) &s[counter]);
		counter--;
	}
	return (NULL);
}
