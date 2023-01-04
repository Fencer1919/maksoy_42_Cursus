/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <maksoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:37:10 by maksoy            #+#    #+#             */
/*   Updated: 2022/10/13 01:50:48 by maksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(char *buf);
char	*get_next_line(int fd);
char	*get_new_line(char *buffer);
char	*get_line(int fd, char *buffer);
char	*strjoin(char *s1, char *s2);
char	*get_new_buffer(char *buffer);
int		find_nl_char(char *buffer);

#endif
