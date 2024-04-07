/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_block.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:56 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:38:25 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mb_gui_fps.h"

#ifdef _WIN32
// TODO
#else
# include <unistd.h>
#endif

#ifdef _WIN32

// TODO

#else

t_mb_err	mb_gui_fps_block(t_mb_gui_fps *self)
{
	uint32_t	block_time;

	if (mb_gui_fps_time_to_next_render(self, &block_time))
		return (true);
	if (usleep(block_time))
		return (true);
	return (false);
}

#endif
