/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:59:15 by ibuil             #+#    #+#             */
/*   Updated: 2026/05/22 18:13:04 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	len;

	if (min >= max)
		return (0);
	len = max - min;
	dest = malloc(len * sizeof(int));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = i + min;
		i++;
	}
	return (dest);
}
