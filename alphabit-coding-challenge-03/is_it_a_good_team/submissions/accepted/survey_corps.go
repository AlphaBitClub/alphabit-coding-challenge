package main

import "fmt"

func main() {
	var m string
	var res []int
	fmt.Scanf("%v", &m)
	l := len(m)
	for i := 0; i < l; i++ {
		if string(m[i]) == "l" {
			res = append(res, i)
		}
	}
	err := res[0]
	for i := 1; i < len(res); i++ {
		err ^= res[i]
	}
	fmt.Printf("%v", err)

}
