package main

import "fmt"

/*
** I comment this
*/

func ft_print(str string){
	/*
	** Comment inside
	*/
	fmt.Printf(str, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10)
}

func main(){
	ft_print("package main%c%cimport %cfmt%c%c%c/*%c** I comment this%c*/%c%cfunc ft_print(str string){%c	/*%c	** Comment inside%c	*/%c	fmt.Printf(str, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10)%c}%c%cfunc main(){%c	ft_print(%c%s%c)%c}%c")
}
