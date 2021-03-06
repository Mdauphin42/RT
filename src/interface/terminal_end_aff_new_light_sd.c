/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_end_aff_new_light_sd.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:31:26 by prossi            #+#    #+#             */
/*   Updated: 2018/04/17 13:33:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void	end_aff_new_light_sh(t_stuff *e, char *tmp)
{
	e->i.term.tab[e->i.term.indextab] = \
	ft_strcpy(e->i.term.tab[e->i.term.indextab], tmp);
	e->i.term.tabfill = 1;
	ft_strclr(e->i.term.wbuf);
	ft_strdel(&tmp);
	if (e->i.nobj.first == 8)
	{
		e->i.nobj.first = -1;
		multi_thread(e);
		apercu_courant(e);
	}
	else
	{
		e->i.nobj.first++;
		terminal(e);
	}
}
