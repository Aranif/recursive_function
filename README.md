<p><strong>NOTE: </strong>This repository is in English, I take turns learning the language.</p>
<h></h>

<h1>Description</h1>

<p>This program will help you understand how resursive works in C. If you have never programmed in C and you are new, the code may be a little confusing. </p>
<p>concept: A recursive function is still a function that calls itself. It runs until some condition is met that allows it to stop running. <bold>IMPORTANT</bold> There must be a condition or something that when met stops calling itself, otherwise it will make an infinite loop.
</p>

<h1>.h files</h1>
<p>In these headers (encruta1.h and labyrinth.h) the information that we are going to use is collected, such as the labyrinth that we will use with 12 columns and 8 rows. In encruta.h we have the function that we will use in both ways to navigate the maze.

</p>

```c
/* Dimensiones del laberinto */
#define NCOL 12
#define NFIL  8
//fichero laberinto.h

/* "Mapa" del laberinto */
#define LABERINTO "############", \
                  "#..###....##", \
                  "##...#.###.#", \
                  "#..#.#.#...#", \
                  "###....#####", \
                  "#...###....#", \
                  "#.#.....##.#", \
                  "##########.#"
```
