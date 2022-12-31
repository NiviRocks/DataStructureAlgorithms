# DataStructureAlgorithms
*Find various Data Structure Algorithms ahead*  

![GitHub language count](https://img.shields.io/github/languages/count/NiviRocks/DataStructureAlgorithms?color=%2314dd93&label=Coding%20Languages)
![GitHub top language](https://img.shields.io/github/languages/top/NiviRocks/DataStructureAlgorithms?color=%23a01feb)
![GitHub repo size](https://img.shields.io/github/repo-size/NiviRocks/DataStructureAlgorithms?color=%23ebd31f)
![GitHub commit activity](https://img.shields.io/github/commit-activity/w/NiviRocks/DataStructureAlgorithms?color=%23eb3a1f)
![GitHub last commit](https://img.shields.io/github/last-commit/NiviRocks/DataStructureAlgorithms)
![Code Python](https://img.shields.io/badge/Code-Python-yellow?style=flat&logo=python)
![Code C](https://img.shields.io/badge/Code-C%20program-brightgreen?style=flat&logo=C)

## Find the Direct Link and Explaination for Codes of Algorithms here 👉   
___
> **N Queen Algorithm**  
___
*[Get Code Link Here](https://github.com/NiviRocks/DataStructureAlgorithms/blob/d8c59a2574e86bcef60acb55f5cdd76762d70b28/nqueen.c)*
 - This algorithm finds the positions for n number of queens in n X n chess board such that there
   are no queen that attack any other queen. 
 - The algorithm uses backtracking.
 - Example of a solution for 8 X 8 chess board with 8 queen: <details><summary>Click Here</summary>
 
   ![8queens solution example](https://user-images.githubusercontent.com/96379756/168439996-7f6972b2-c7b0-4770-a0c1-c63f26be6374.jpg)
   </details>
 - Time complexity of the Algorithm is: `O(N!)`  
___
> **Stack Implementation**  
___
*[Get Code Link Here](https://github.com/NiviRocks/DataStructureAlgorithms/blob/main/stack%20using%20linked%20list.py)*
 - Stack implementation using linked list that allows functions like ```push()```, ```pop()``` and ``` display()```
 - A stack always follows LIFO rule.
 - Example of Stack operation: <details><summary>Click Here</summary>  
   <img width="300" height="200" alt="stack" src="https://user-images.githubusercontent.com/96379756/169552534-15f0a841-2046-41aa-8541-baa813472266.png">
   </details>
 - Time complexity of the Algorithm is `O(N)` for all functions.
___
> **Deadline Based Job Selection Algorithm**  
___
*[Get Code Link Here](https://github.com/NiviRocks/DataStructureAlgorithms/blob/main/deadline-based-job-scheme.c)*  
 - `job`, `profit` gained by completing them along with `deadline` for completing them is provided.
 - We need to find the jobs that should be selected in order to gain maximum profit within **Overall Deadline for All Jobs**
 - ***Note: Any job with deadline `x` can be finished within deadline 1 to `x` assuming `each job takes exactly 1 unit time` to be completed***
 - Example : 
 <details><summary>Given Jobs, Profits and Deadlines :</summary>  
 <img width="500" height="100" alt="stack" src="https://user-images.githubusercontent.com/96379756/170748003-91bc79a0-4599-40c6-855f-9401de5bd44d.png"></details>  
 <details><summary>Sorted Jobs, Profits and Deadline based on Profits :</summary>  
 <img width="500" height="100" alt="stack" src="https://user-images.githubusercontent.com/96379756/170748985-1af982e1-0525-4aff-b9e6-fa9567a3d200.png"></details>  
 - Let Max Deadline = 4
 <details><summary>Then selected jobs and the deadline selected to finish them are :</summary>   
 <img width="500" height="100" alt="stack" src="https://user-images.githubusercontent.com/96379756/170750247-a414ee97-2a06-4f8a-bf5d-d809aa97b2b1.png"></details>  
 
___
> **Insertion Sort Algorithm**  
___
 *[Get Code Link Here](https://github.com/NiviRocks/DataStructureAlgorithms/blob/main/insertion%20sort.py)*
 - Insertion Sort is a sorting technique 
 - Example: <details><summary>How Insertion Sort Works? </summary>   
  <img width="500" height="500" alt="stack" src="https://user-images.githubusercontent.com/96379756/171092619-f0c5b9f6-a3b1-4506-bf0f-24e803c4bd06.png"></details>
 - Time Complexity :   
   - Worst Case: ```O(n^2)```   
   - Average Case: ```Θ(n^2)```  
   - Best Case: ```Ω(n)```
___  

___
> **Krushkal's Algorithm**  
___
*[Get Code Link Here]()*
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
 
 ___
> **Breadth First Search (BFS) Algorithm**  
___
*[Get Code Link Here](https://github.com/NiviRocks/DataStructureAlgorithms/blob/main/BFS.py)*
 - Function ```addNodes(item)``` creates the graph. 
 - Input should be an Adjecency List  
 - Example of graph is given below <details><summary>Click Here</summary>  
   <img width="300" height="200" alt="stack" src="https://github.com/NiviRocks/GraphAlgos/blob/main/image/bfs%20graph.png">
   </details>
 - Function ```Display_BFS(curr)``` displays BFS sequence of graph, takes parameter curr as starting node.
 - Dry Run :  
   INPUT: 
   ```
   g=[[1,2],[1,4],[2,4],[2,5],[4,7],[4,5],[5,3],[5,1],[5,6],[6,8],[6,3],[8,7]]
   Graph.graph(g) 
   print("Display Graph")
   Graph.ShowGraph()
   print("BFS Sequence")
   Graph.Display_BFS(1)
   ```  
   OUTPUT:  
   ```
   Display Graph
   1 -> [2, 4]
   2 -> [4, 5]
   4 -> [7, 5]
   5 -> [3, 1, 6]
   6 -> [8, 3]
   8 -> [7]
   BFS Sequence
   1 2 4 5 7 3 6 8 
   ```
 - Time complexity of the Algorithm is: `O(V+E)`  where V is the number of vertices and E is the number of Edges

