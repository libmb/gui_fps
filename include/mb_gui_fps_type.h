/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_type.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:27 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:38:52 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MB_GUI_FPS_TYPE_H
# define MB_GUI_FPS_TYPE_H

# include <stdint.h>
# include <stdbool.h>

# ifdef _WIN32

#  include <windows.h>

# else

#  include <sys/time.h>

# endif

# ifndef MB_ERR_DEFINED
#  define MB_ERR_DEFINED

typedef bool	t_mb_err;

# endif

# ifdef _WIN32

// TODO

# else

typedef struct s_mb_gui_fps
{
	struct timeval	last_rendered_time;
	uint32_t		us_per_frame;
	char			_pad[sizeof(struct timeval) - sizeof(uint32_t)];
}	t_mb_gui_fps;

# endif

#endif
