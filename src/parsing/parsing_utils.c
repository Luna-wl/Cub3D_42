/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wluedara <wluedara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:58:13 by etetopat          #+#    #+#             */
/*   Updated: 2023/11/07 13:25:07 by wluedara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	is_whitespace(char c)
{
	if (c != ' ' && c != '\t' && c != '\r' && c != '\n'
		&& c != '\v' && c != '\f')
		return (FAILURE);
	return (SUCCESS);
}

size_t	find_map_width(t_map_info *map, int i)
{
	size_t	longest_line;

	longest_line = ft_strlen(map->file[i]);
	while (map->file[i])
	{
		if (ft_strlen(map->file[i]) > longest_line)
			longest_line = ft_strlen(map->file[i]);
		i++;
	}
	return (longest_line);
}
