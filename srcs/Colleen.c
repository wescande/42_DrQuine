/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colleen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:29:49 by wescande          #+#    #+#             */
/*   Updated: 2017/07/14 14:58:28 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define STR		"/* ************************************************************************** */%c/*                                                                            */%c/*                                                        :::      ::::::::   */%c/*   Colleen.c                                          :+:      :+:    :+:   */%c/*                                                    +:+ +:+         +:+     */%c/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */%c/*                                                +#+#+#+#+#+   +#+           */%c/*   Created: 2017/07/14 13:29:49 by wescande          #+#    #+#             */%c/*   Updated: 2017/07/14 14:58:28 by wescande         ###   ########.fr       */%c/*                                                                            */%c/* ************************************************************************** */%c%c#include <stdio.h>%c#define STR		%c%s%c%c%c/*%c**	This program will print its own source when run.%c*/%c%cvoid	ft_print(void)%c{%c	printf(STR, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, STR,%c			34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,%c			10, 10, 10, 10, 10, 10);%c}%c%cint		main(void)%c{%c/*%c	I'm in main%c*/%c	ft_print();%c	return (0);%c}%c"

/*
**	This program will print its own source when run.
*/

void	ft_print(void)
{
	printf(STR, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, STR,
			34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
			10, 10, 10, 10, 10, 10);
}

int		main(void)
{
/*
	I'm in main
*/
	ft_print();
	return (0);
}
