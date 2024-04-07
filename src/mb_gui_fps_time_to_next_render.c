/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_time_to_next_render.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:56 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 00:02:59 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_gui_fps.h"

#include <unistd.h>

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
	time_t			sec_difference;
	suseconds_t		usec_difference;

	if (gettimeofday(&tv, NULL))
		return (true);
	sec_difference = tv.tv_sec - self->last_rendered_time.tv_sec;
	usec_difference = 1000000 + tv.tv_usec - self->last_rendered_time.tv_usec;
	*out
		= (uint32_t)(sec_difference * 1000000 + usec_difference - 1000000);
	return (false);
}

#endif
