/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seogkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 00:47:12 by seogkim           #+#    #+#             */
/*   Updated: 2020/02/25 00:47:12 by seogkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (size--)
	{
		if (*s1 != *s2 || (!*s1 && !*s2))
			return ((unsigned char)(*(s1)) - (unsigned char)(*(s2)));
		s1++;
		s2++;
	}
	return (0);
}
