/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:25:57 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/14 19:45:05 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	size_t		len;
	char		*fr;

	if (s)
	{
		len = ft_strlen(s);
		if (!(fr = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			fr[i] = f(s[i]);
			i++;
		}
		fr[i] = '\0';
		return (fr);
	}
	return (NULL);
}
