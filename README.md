# DataStructureAlgorithms
*Find various Data Structure Algorithms ahead*  

![GitHub language count](https://img.shields.io/github/languages/count/NiviRocks/DataStructureAlgorithms?color=%2314dd93&label=Coding%20Languages)
![GitHub top language](https://img.shields.io/github/languages/top/NiviRocks/DataStructureAlgorithms?color=%23a01feb)
![GitHub repo size](https://img.shields.io/github/repo-size/NiviRocks/DataStructureAlgorithms?color=%23ebd31f)
![GitHub commit activity](https://img.shields.io/github/commit-activity/w/NiviRocks/DataStructureAlgorithms?color=%23eb3a1f)
![GitHub last commit](https://img.shields.io/github/last-commit/NiviRocks/DataStructureAlgorithms)

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
- ```job```, ```profit``` gained by completing them along with ```deadline``` for completing them is provided.
 - We need to find the jobs that should be selected in order to gain maximum profit within **Overall Deadline for All Jobs**
 - Example : <details><summary>Click Here</summary>  
   - Given Jobs, Profits and Deadlines ->  
       <img width="400" height="80" alt="stack" src="https://user-images.githubusercontent.com/96379756/170748003-91bc79a0-4599-40c6-855f-9401de5bd44d.png"/>  
   - Sorted Jobs, Profits and Deadline based on Profits ->  
       <img width="400" height="80" alt="stack" src="https://user-images.githubusercontent.com/96379756/170748985-1af982e1-0525-4aff-b9e6-fa9567a3d200.png"/>  
   - Let Max Deadline be: 4  
   - Then selected jobs and the deadline selected to finish them are:  
       <img width="400" height="50" alt="stack" src="https://user-images.githubusercontent.com/96379756/170750247-a414ee97-2a06-4f8a-bf5d-d809aa97b2b1.png"/>  
   - Note: Any job with deadline x can be finished within deadline 1 to x assuming each job takes exactly 1 unit time to be completed
</details>
   

