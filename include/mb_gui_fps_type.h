/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps_type.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:27 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/07 17:58:44 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MB_GUI_FPS_TYPE_H
# define MB_GUI_FPS_TYPE_H

# include <stdbool.h>

# if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

#  include <windows.h>

# else

#  include <unistd.h>

# endif

typedef bool	t_err;

# if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

// TODO

# else

typedef struct s_mb_gui_fps
{
	struct timeval	last_rendered_time;
	size_t			us_per_frame;
}	t_mb_gui_fps;

# endif

#endif
