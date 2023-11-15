/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalgonn <amalgonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:44:59 by amalgonn          #+#    #+#             */
/*   Updated: 2023/11/13 16:48:29 by amalgonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstSize)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(dst);
	i = 0;
	if (dstSize <= len_src)
		return (ft_strlen(src) + dstSize);
	while (src[i] && (len_src + i) < (dstSize - 1))
	{
		dst[len_src + i] = src[i];
		i++;
	}
	dst[len_src + i] = '\0';
	return (ft_strlen(src) + len_src);
}
