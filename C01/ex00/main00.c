/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:02:21 by dnascime          #+#    #+#             */
/*   Updated: 2019/11/26 12:31:52 by dnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_ft(int *nbr);

int			main(void)
{
	int i;

	i = 5;
	printf("%d\n", i);
	ft_ft(&i);
	printf("%d\n", i);	
	return(0);
}