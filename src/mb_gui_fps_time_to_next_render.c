/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_time_to_next_render.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:56 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 01:03:53 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_gui_fps.h"

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
// TODO
#else
# include <sys/time.h>
#endif

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

// TODO

#else

t_err	mb_gui_fps_time_to_next_render(t_mb_gui_fps *self, uint32_t *out)
{
	struct timeval	tv;
	struct timeval	next_render;

	if (gettimeofday(&tv, NULL))
		return (true);
	next_render.tv_sec = self->last_rendered_time.tv_sec
		+ (time_t)self->us_per_frame / 1000000;
	next_render.tv_usec = self->last_rendered_time.tv_usec
		+ (suseconds_t)self->us_per_frame % 1000000;
	if (next_render.tv_usec >= 1000000)
	{
		next_render.tv_sec += 1;
		next_render.tv_usec -= 1000000;
	}
	if (tv.tv_sec > next_render.tv_sec || (tv.tv_sec == next_render.tv_sec
			&& tv.tv_usec > next_render.tv_usec))
	{
		*out = 0;
		return (false);
	}
	*out = (uint32_t)((tv.tv_sec - self->last_rendered_time.tv_sec) * 1000000
			+ tv.tv_usec - self->last_rendered_time.tv_usec);
	return (false);
}

#endif
