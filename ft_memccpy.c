/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 17:30:29 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 17:30:33 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	ch = c;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (i < n && (i == 0 || s[i - 1] != ch))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == ch)
		return (d + i);
	else
		return (NULL);
}
