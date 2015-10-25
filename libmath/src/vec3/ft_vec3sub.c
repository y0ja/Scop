/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3sub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 05:51:58 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/25 06:11:34 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_vec3		ft_vec3sub(t_vec3 v1, t_vec3 v2)
{
	return (VEC3(
		v1.x - v2.x,
		v1.y - v2.y,
		v1.z - v2.z
	));
}