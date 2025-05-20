/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointersp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 03:31:57 by davidma2          #+#    #+#             */
/*   Updated: 2025/05/20 10:27:54 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointersp(void *pt)
{
	int	i;

	i = 0;
	if (!pt)
		return (ft_putstr("(nill)"));
	i += ft_putstr("0x");
	i += ft_printf_hex((unsigned long)pt, "x");
}
