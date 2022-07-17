/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_coldown.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 14:37:06 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 16:40:39 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_coldown(int *a)
{
	int i;
	static int coldown[5];

	i = 5;
	*coldown = 0;
	while (i < 9)
	{
		coldown[i] = a[i];
		i++;
	}
	return (coldown);
}
