/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabrageo <vabrageo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 12:11:38 by vabrageo          #+#    #+#             */
/*   Updated: 2020/02/02 16:40:56 by vabrageo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define MEME 178765
#define INCLUDE "%u%-x%*c%.*x63Gy%.2u%*cG58XT%-sQVo", -1413624116, -2147483647, -7, '\0', 3, 0, 0, -4, 'd', "PTp4aTjaX7AJORNvjBudyPC3CADw0qyvXCoxRR3x6fhzbUb"
int main(void)
{
	//char *p = "test";
	ft_printf("======================= PRINTF TESTING =======================\n");
	ft_printf("|RET : %d", ft_printf(INCLUDE));
	printf("\n");
	printf("|RET : %d", printf(INCLUDE));
	printf("\n");
}