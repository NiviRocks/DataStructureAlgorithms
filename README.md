# DataStructureAlgorithms
*Find various Data Structure Algorithms in C ahead*
## Find the Direct Link and Explaination for Codes of Algorithms here 👉 
> ***[Krushkal's Algorithm](https://github.com/NiviRocks/DataStructureAlgorithms/Krushkals.c)***
 - This algorithm finds the Minimum Spanning Tree (MST) for a connected undirected weighted Graph. 
 - The algorithm uses structure to represent graph:
 ```
  struct graph {
      int u;
      int v;
      int weight;
  }
  ```
 - Merge Sort is used to sort the graph in ascending order of its weights
 - The function `int krushkals( int E,int V)` to find MST
 - Time complexity of the Algorithm is: `O(E.logE)`  
   here, ***log*** represents *log (base 2)* and ***E*** is number of Edges in Graph
 - Output is displays edges in order of selection and their corresponding weights.
> ***[N Queen Algorithm](https://github.com/NiviRocks/DataStructureAlgorithms/nqueen.c)***
 - This algorithm finds the positions for n number of queens in n X n chess board such that there
   are no queen that attack any other queen. 
 - The algorithm uses backtracking.
 - Example of a solution for 8 X 8 chess board with 8 queen: <details><summary>Click Here</summary>
 
   ![8queens solution example](https://user-images.githubusercontent.com/96379756/168439996-7f6972b2-c7b0-4770-a0c1-c63f26be6374.jpg)
   </details>
 - Time complexity of the Algorithm is: `O(N!)`  
