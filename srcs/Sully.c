/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sully.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:54:38 by wescande          #+#    #+#             */
/*   Updated: 2017/07/14 16:49:22 by wescande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define HEADER "/* ************************************************************************** */%c/*                                                                            */%c/*                                                        :::      ::::::::   */%c/*   sully.c                                            :+:      :+:    :+:   */%c/*                                                    +:+ +:+         +:+     */%c/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */%c/*                                                +#+#+#+#+#+   +#+           */%c/*   Created: 2017/07/14 15:54:38 by wescande          #+#    #+#             */%c/*   Updated: 2017/07/14 16:49:22 by wescande         ###   ########.fr       */%c/*                                                                            */%c/* ************************************************************************** */%c"
#define HEAD "%c#define _GNU_SOURCE%c%c#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%c%c#define HEADER %c%s%c%c#define HEAD %c%s%c%c#define BODY %c%s%c%c%c"
#define BODY "int main(void)%c{%c	char *name;%c	char *compilation;%c	char *execution;%c	int i;%c	int fd;%c%c	i = %d;%c	if (i < 0)%c		return (0);%c	if (!asprintf(&name, %cSully_%%d.c%c, i))%c		return (1);%c	if (!asprintf(&compilation, %cgcc -Wall -Wextra -Werror %%s -o Sully_%%d%c, name, i))%c		return (1);%c	if (!asprintf(&execution, %c./Sully_%%d%c, i))%c		return (1);%c	if ((fd = open(name, O_CREAT | O_TRUNC | O_WRONLY, 0644)) == -1)%c		return (1);%c		--i;%cfree(name);%c	dprintf(fd, HEADER, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c	dprintf(fd, HEAD, 10, 10, 10, 10, 10, 10, 10, 10, 34, HEADER, 34, 10, 34, HEAD, 34, 10, 34, BODY, 34, 10, 10);%c	dprintf(fd, BODY, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c	close(fd);%c	system(compilation);%c	free(compilation);%c	system(execution);%c	free(execution);%c	return (0);%c}%c"

int main(void)
{
	char *name;
	char *compilation;
	char *execution;
	int i;
	int fd;

	i = 5;
	if (i < 0)
		return (0);
	if (!asprintf(&name, "Sully_%d.c", i))
		return (1);
	if (!asprintf(&compilation, "gcc -Wall -Wextra -Werror %s -o Sully_%d", name, i))
		return (1);
	if (!asprintf(&execution, "./Sully_%d", i))
		return (1);
	if ((fd = open(name, O_CREAT | O_TRUNC | O_WRONLY, 0644)) == -1)
		return (1);
	--i;
	free(name);
	dprintf(fd, HEADER, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
	dprintf(fd, HEAD, 10, 10, 10, 10, 10, 10, 10, 10, 34, HEADER, 34, 10, 34, HEAD, 34, 10, 34, BODY, 34, 10, 10);
	dprintf(fd, BODY, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
	close(fd);
	system(compilation);
	free(compilation);
	system(execution);
	free(execution);
	return (0);
}
