package main

import "fmt"

func main() {
	var n, i int64
	var j, k, surface float64
	fmt.Scanf("%v", &n)
	var taille [][]float64
	for i = 0; i < n; i++ {
		fmt.Scanf("%v %v", &j, &k)
		inp := make([]float64, 0)
		inp = append(inp, j, k)
		taille = append(taille, inp)
	}
	if taille[0][0] >= taille[0][1] {
		star := taille[0][0] * taille[0][1]
		parts := 0.0
		surface = 0
		for i = 1; i < n; i++ {
			parts += taille[0][1] * taille[i][0]
			surface += taille[i][0] * taille[i][1]
		}
		fmt.Printf("%v", surface-parts+star)
	} else {
		star := taille[0][0] * taille[0][1]
		parts := 0.0
		surface = 0
		for i = 1; i < n; i++ {
			parts += taille[0][0] * taille[i][1]
			surface += taille[i][0] * taille[i][1]
		}
		fmt.Printf("%v", surface-parts+star)
	}

}
