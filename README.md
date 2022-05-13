# DataStructureAlgorithms
*Find various Data Structure Algorithms in C ahead*
## Find the Direct Link for Codes of Algorithms here 👉 
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
 - Firstly, Merge Sort is used on struct graph 
 - The function `int krushkals( int E,int V)` to find MST
 - Time complexity of the Algorithm is: `O(E.logE)`  
   here, ***log*** represents *log (base 2)* and ***E*** is number of Edges in Graph
 - Output is displays edges in order of selection and their corresponding weights.
