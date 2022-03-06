/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejhong <yejhong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:26:40 by yejhong           #+#    #+#             */
/*   Updated: 2022/01/16 18:26:43 by yejhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	push(char c, char *stack, int top)
{
	if (top == -1)
		stack[++top] = c;
	else if (stack[top] < c)
		stack[++top] = c;
	return (top);
}

int	clear_st(char *stack)
{
	int	i;

	i = 0;
	while (i < 4)
		stack[i++] = 0;
	return (-1);
}
