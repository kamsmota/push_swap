/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 09:49:46 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/25 18:12:19 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

void	ft_printa(int *a, int n);
int		ft_swap(int *a1, int *a2);
int		ft_push(int *a1, int *b1);
int		ft_rotate(int *a, int n);
int		ft_reverse_rotate(int *a, int n);
int		*ft_arrayjoin(int *a, int n, int i);
int		ft_atoi(char *str);
int		ft_isdigit(char *str);
int		ft_strcmp(char *str, char *cmp);
int		ft_flag(char *str);
int		*ft_create_array(char **argv);
double	ft_disorder(int *a, int n);

#endif