/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:10:16 by mmaschio          #+#    #+#             */
/*   Updated: 2023/08/17 13:44:47 by mmaschio         ###   ########.fr       */
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
int					ft_atoi(const char *str);
void				*ft_calloc(size_t nmemb, size_t size);
char				*ft_strdup(const char *src);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_putchar_fd(char c, int fd);
#endif
