/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaloyi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:55:33 by gbaloyi           #+#    #+#             */
/*   Updated: 2018/06/12 15:36:09 by gbaloyi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (*s1 == *s2 && n > 0)
		{
			if (*s1 == 0)
			{
				return (1);
			}
			s1++;
			s2++;
			n--;
		}
		if (n == 0 || (*s1 == 0 && *s2 == 0))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
