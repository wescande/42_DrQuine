/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:00:31 by wescande          #+#    #+#             */
/*   Updated: 2017/07/14 15:53:55 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define HEAD "/* ************************************************************************** */%c/*                                                                            */%c/*                                                        :::      ::::::::   */%c/*   grace.c                                            :+:      :+:    :+:   */%c/*                                                    +:+ +:+         +:+     */%c/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */%c/*                                                +#+#+#+#+#+   +#+           */%c/*   Created: 2017/07/14 15:00:31 by wescande          #+#    #+#             */%c/*   Updated: 2017/07/14 15:53:55 by wescande         ###   ########.fr       */%c/*                                                                            */%c/* ************************************************************************** */%c"
#define BODY "%c#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%c#define HEAD %c%s%c%c#define BODY %c%s%c%c#define FT(x,y)int main(void){int fd; fd = open(%cGrace_kid.c%c, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, x, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);dprintf(fd, y, 10, 10, 10, 10, 10, 34, x, 34, 10, 34, y, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);close(fd);return(0);}%c%c/*%c**	Comment like a boss%c*/%c%cFT(HEAD, BODY)%c"
#define FT(x,y)int main(void){int fd; fd = open("Grace_kid.c", O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, x, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);dprintf(fd, y, 10, 10, 10, 10, 10, 34, x, 34, 10, 34, y, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);close(fd);return(0);}

/*
**	Comment like a boss
*/

FT(HEAD, BODY)
