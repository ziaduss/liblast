/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 15:31:18 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 16:25:53 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		j = 0;
		if (to_find[0] == '\0')
			return ((char*)str);
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char*)str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
