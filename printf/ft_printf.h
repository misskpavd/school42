/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:03:59 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/14 12:08:32 by kvan-don         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOW_CASE_HEX "0123456789abcdef"
# define UP_CASE_HEX "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
void	ft_putchar_pf(char c, size_t *count);
void	ft_putstr_pf(char *str, size_t *count);
void    ft_putptr_pf(void *ptr, size_t *count);
void	ft_putnbr_pf(int num, size_t *count);
void	ft_putuint_pf(unsigned int num, size_t *count);
void	ft_puthex_pf(unsigned int num, size_t *count, char *base);

#endif
