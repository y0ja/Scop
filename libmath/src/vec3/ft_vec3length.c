/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 05:52:10 by y0ja              #+#    #+#             */
/*   Updated: 2015/10/25 22:40:12 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

float		ft_vec3length(t_vec3 v)
{
	return (ft_sqrtf((v.x * v.x) + (v.y * v.y) + (v.z * v.z)));
}
