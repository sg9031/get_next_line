/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sg9031 <sg9031@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:36:14 by sgrondin          #+#    #+#             */
/*   Updated: 2021/01/26 17:38:34 by sg9031           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		read_from_fd(int fd, char **line, char **memory);
int		complete_line(char **line, char *buffer);
int		load_from_memory(char **memory, char **line);
char	*ft_strdup(const char *src);
int		line_length(char *line, int entire);
char	*ft_strchr(const char *s, int c);
int		create_tmp(char **line, char **tmp);

#endif
