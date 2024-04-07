/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_mark_as_rendered.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:56 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:38:58 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_gui_fps.h"

#ifdef _WIN32
// TODO
#else
# include <sys/time.h>
#endif

#ifdef _WIN32

// TODO

#else

t_mb_err	mb_gui_fps_mark_as_rendered(t_mb_gui_fps *self)
{
	if (gettimeofday(&self->last_rendered_time, NULL))
		return (true);
	return (false);
}

#endif
