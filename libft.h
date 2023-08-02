/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpavoski <mpavoski@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:06:53 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/02 09:55:30 by mpavoski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
//Libraries

# include <unistd.h>
# include <stdlib.h>

//Functions
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);
void				*ft_memset(void *ptr_mem, int val_to_exc, size_t num_b);
void				ft_bzero(void *ptr_m, size_t num_b);
void				*ft_memcpy(void *dest, const void *src, size_t num_b);
void				*ft_memmove(void *dest, const void *src, size_t num_b);
size_t				ft_strlcpy(char *dest, const char *src, size_t len);
size_t				ft_strlcat(char *dest, const char *src, size_t len);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
int					ft_strncmp(const char *str1, const char *str2, \
								size_t num_b);
void				*ft_memchr(const void *ptr, int val_b, size_t num_b);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num_b);
char				*ft_strnstr(const char *str, const char *sustr, size_t len);
#endif
