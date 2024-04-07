/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_is_blocked.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:56 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 00:03:42 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_gui_fps.h"

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

// TODO

#else

t_err	mb_gui_fps_is_blocked(t_mb_gui_fps *self, bool *out)
{
	uint32_t	block_time;

	if (mb_gui_fps_time_to_next_render(self, &block_time))
		return (true);
	*out = block_time != 0;
	return (false);
}

#endif
