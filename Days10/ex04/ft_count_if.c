/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 10:35:32 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/18 15:24:17 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			c++;
		i++;
	}
	return (c);
}
