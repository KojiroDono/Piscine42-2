/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:39:31 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/07 15:43:36 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i <= j)
	{
		if (j <= k)
			return (j);
		else
			return (k);
	}
	else
	{
		if (j >= k)
			return (j);
		else if (i <= k)
			return (i);
	}
}
