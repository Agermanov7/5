/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-2____ft_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/01/03 23:35:59 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
/* **************************************************************************


Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите функцию, которая отображает строку в стандартном выводе.

Указатель, переданный функции, содержит адрес первого символа строки.


Ваша функция должна быть объявлена ​​следующим образом:

void	ft_putstr(char *str);


   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */



/* функция печатающая строку */

#include <unistd.h>

void	ft_putstr(char *str)	/* принимаем адрес строки (первого элемента массива) и сохраняем в указателе */
{
	while (*str != '\0')		/* Проверяем является ли символ в этой ячейки завершающим нулем '\0'. Если да то завершаем цикл, 
								** если нет то запускаем содержимое цикла */
	{
		write(1, str, 1);		/* Печатаем этот символ */
		str++;					/* увеличивая указательна один мы делаем так чтобы он хранил адресс уже след ячейки массиваб, 
								 * чтоб перейти к проверке к следующего числа и если оно не '\0' то снова печатаем его и т.д и т.п пока str[i] не равен '\0' */
	}
}

/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* ************************************************************************** */
/* ********************************_OR_THAT_:)******************************* */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}


