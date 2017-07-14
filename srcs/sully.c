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

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define HEADER "/* ************************************************************************** */%c/*                                                                            */%c/*                                                        :::      ::::::::   */%c/*   grace.c                                            :+:      :+:    :+:   */%c/*                                                    +:+ +:+         +:+     */%c/*   By: wescande <wescande@student.42.fr>          +#+  +:+       +#+        */%c/*                                                +#+#+#+#+#+   +#+           */%c/*   Created: 2017/07/14 15:00:31 by wescande          #+#    #+#             */%c/*   Updated: 2017/07/14 15:53:55 by wescande         ###   ########.fr       */%c/*                                                                            */%c/* ************************************************************************** */%c"
#define HEAD "%c#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%c%c#define HEADER %c%s%c%c#define HEAD %c%s%c%c#define BODY %c%s%c%c"
#define BODY "#define FT(x,y)int main(void){int fd; fd = open(%cGrace_kid.c%c, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, x, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);dprintf(fd, y, 10, 10, 10, 10, 10, 34, x, 34, 10, 34, y, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);close(fd);return(0);}%c%c/*%c**	Comment like a boss%c*/%c%cFT(HEAD, BODY)%c"
#define FT(x,y)int main(void){if (NEXT){int fd; fd = open(PROG, O_CREAT | O_TRUNC | O_WRONLY, 0644);dprintf(fd, x, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);dprintf(fd, y, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 34, 34, 10, 34, 34, 10, 34, x, 34, 10, 34, y, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);close(fd); system("gcc -Wall -Wextra -Werror " PROG " -o " EXEC);system("./" EXEC);}return(0);}

/* FT(HEAD, BODY) */
int main(void)
#include <fcntl.h>
{
	char *name;
	char *compilation;
	char *execution;
	int i;
	int fd;

	i = 5;
	--i;
	if (i < 0)
		return (0);
	if (!asprintf(&name, "Sully_%d.c", i))
		return (1);
	if (!asprintf(&compilation, "gcc -Wall -Wextra -Werror %s.c -o %d", name, i))
		return (1);
	if (!asprintf(&execution, "./Sully_%d", i))
		return (1);
	if ((fd = open(name, O_CREAT | O_TRUNC | O_WRONLY, 0644)) == -1)
		return (1);
	free(name);
	dprintf(fd, HEADER, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
	dprintf(fd, HEAD, 10, 10, 10, 10, 10, 10, 34, HEADER, 34, 10, 34, HEAD, 34, 10, 34, BODY, 34, 10);
	dprintf(fd, BODY);
	close(fd);
	system(compilation);
	free(compilation);
	system(execution);
	free(execution);
	return (0);
}
