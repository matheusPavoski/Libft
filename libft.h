/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:06:53 by mmaschio          #+#    #+#             */
/*   Updated: 2023/07/28 12:32:47 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//Libraries

# include<unistd.h>
# include<stdlib.h>

//Functions

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
unsigned long int	ft_strlen(char *str);
void				*ft_memset(void *ptr_mem, int val_to_exc, size_t num_b);
void 				ft_bzero(void *ptr_m, size_t num_b);
void				*ft_memcpy(void *dest, const void *src, size_t num_b);
void				*ft_memmove(void *dest, const void *src, size_t num_b);
size_t				ft_strlcpy(char *dest, const char *src, size_t len);
#endif
