/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mb_gui_fps.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Juyeong Maing <jmaing@student.42seoul.kr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:25:27 by Juyeong Maing     #+#    #+#             */
/*   Updated: 2024/04/07 18:41:11 by Juyeong Maing    ###   ########.fr       */
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
 * @param us_per_frame microseconds per frame you want
 */
t_err	mb_gui_fps_init(t_mb_gui_fps *out, size_t us_per_frame);

/**
 * not thread safe
 */
t_err	mb_gui_fps_finalize(t_mb_gui_fps self);

/**
 * @brief block until next frame
 *
 * not thread safe
 *
 * @return true if interrupted
 */
t_err	mb_gui_fps_block(t_mb_gui_fps *self);

/**
 * @brief check if render now is appropriate
 *
 * not thread safe
 */
t_err	mb_gui_fps_is_blocked(t_mb_gui_fps *self, bool *out);

/**
 * @brief not needed to be called. call after long time render, or to skip frame
 *
 * not thread safe
 */
t_err	mb_gui_fps_mark_as_rendered(t_mb_gui_fps *self);

#endif
