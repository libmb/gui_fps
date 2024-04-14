/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:56 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:38:58 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_gui_fps.h"

#ifdef _WIN32

t_mb_err	mb_gui_fps_init(t_mb_gui_fps *out, uint32_t ms_per_frame)
{
	out->last_rendered_time.time = 0;
	out->ms_per_frame = ms_per_frame;
	return (false);
}

#else

t_mb_err	mb_gui_fps_init(t_mb_gui_fps *out, uint32_t ms_per_frame)
{
	out->last_rendered_time.tv_sec = 0;
	out->last_rendered_time.tv_usec = 0;
	out->ms_per_frame = ms_per_frame;
	return (false);
}

#endif
