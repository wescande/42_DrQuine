package main

import (
	"fmt"
	"os/exec"
	"os"
	"bufio"
)

func main(){
	i := 5
	if (i < 0){
		return
	}
	pwd,_ := os.Getwd()
	name := fmt.Sprintf("Sully_%d.go", i)
	exe := fmt.Sprintf("%s/Sully_%d", pwd, i)
	file,_ := os.Create(name)
	buff := bufio.NewWriter(file)
	content := "package main%c%cimport (%c	%cfmt%c%c	%cos/exec%c%c	%cos%c%c	%cbufio%c%c)%c%cfunc main(){%c	i := %d%c	if (i < 0){%c		return%c	}%c	pwd,_ := os.Getwd()%c	name := fmt.Sprintf(%cSully_%%d.go%c, i)%c	exe := fmt.Sprintf(%c%%s/Sully_%%d%c, pwd, i)%c	file,_ := os.Create(name)%c	buff := bufio.NewWriter(file)%c	content := %c%s%c%c	fmt.Fprintf(buff, content, 10, 10, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 34, content, 34, 10, 10, 10, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10, 10, 10, 10, 10)%c	buff.Flush()%c	cmd := exec.Command(%cgccgo%c, %c-Wall%c, %c-Wextra%c, %c-Werror%c, name, %c-o%c, exe)%c	cmd.Start()%c	cmd.Wait()%c	cmd = exec.Command(exe)%c	cmd.Start()%c}%c"
	fmt.Fprintf(buff, content, 10, 10, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 10, 10, 10, i - 1, 10, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 10, 10, 34, content, 34, 10, 10, 10, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10, 10, 10, 10, 10)
	buff.Flush()
	cmd := exec.Command("gccgo", "-Wall", "-Wextra", "-Werror", name, "-o", exe)
	cmd.Start()
	cmd.Wait()
	cmd = exec.Command(exe)
	cmd.Start()
}
