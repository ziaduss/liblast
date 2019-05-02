/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: moghomra <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/14 18:35:39 by moghomra     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 18:22:48 by moghomra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		i;

	neg = 0;
	i = 0;
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(ft_nbrlen(n) + 1)))
		return (NULL);
	str[ft_nbrlen(n)] = '\0';
	if (n < 0 && (n = n * -1))
		neg = 1;
	while (n > 9)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (n < 10)
		str[i++] = n + '0';
	if (neg == 1)
		str[i] = '-';
	return (ft_strrev(str));
}
