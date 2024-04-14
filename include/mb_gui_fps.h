/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:27 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/08 02:34:08 by Juyeong Maing    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MB_GUI_FPS_H
# define MB_GUI_FPS_H

# include "mb_gui_fps_type.h"

/**
 * @brief initialize instance
 *
 * not thread safe
 *
 * @param ms_per_frame milliseconds per frame you want
 */
t_mb_err	mb_gui_fps_init(t_mb_gui_fps *out, uint32_t ms_per_frame);

/**
 * @brief block until next frame
 *
 * not thread safe
 *
 * @return true if interrupted
 */
t_mb_err	mb_gui_fps_block(t_mb_gui_fps *self);

/**
 * @brief check if render now is appropriate
 *
 * not thread safe
 */
t_mb_err	mb_gui_fps_is_blocked(t_mb_gui_fps *self, bool *out);

/**
 * @brief not needed to be called. call after long time render, or to skip frame
 *
 * not thread safe
 */
t_mb_err	mb_gui_fps_mark_as_rendered(t_mb_gui_fps *self);

/**
 * @brief get minimum time to next render in milliseconds
 *
 * not thread safe
 */
t_mb_err	mb_gui_fps_time_to_next_render(t_mb_gui_fps *self, uint32_t *out);

#endif
