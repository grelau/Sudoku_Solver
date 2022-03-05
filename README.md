# Sudoku_Solver
C program to solve any sudoku grid using backtracking

# How to test it
Open a command prompt to git clone this repo
```bash
git clone git@github.com:grelau/Sudoku_Solver.git
```
change directory to the cloned repo
```bash
cd Sudoku_Solver
```
compile
```bash
gcc main.c fonction_annexe.c fonction_regle.c fonction_verif.c -o test.out
```

run
```bash
./test.out 53..7.... 6..195... .98....6. 8...6...3 4..8.3..1 7...2...6 .6....28. ...419..5 ....8..79
```
A little explanation on the arguments:
the first argument is the first line of the grid,
the last argument is the last line of the grid
empty cells are replace by '.'
Here is the corresponding grid:
![sudoku_grid](https://user-images.githubusercontent.com/42698196/156885054-b0cafd4d-8f63-4acb-aeb7-2cfecafc312c.png =250x250)
<img src="https://user-images.githubusercontent.com/42698196/156885054-b0cafd4d-8f63-4acb-aeb7-2cfecafc312c.png" width="100" height="100">

Of course you can replace the above arguments by any other sudoku grid, it will get solved as long as it's valid.
