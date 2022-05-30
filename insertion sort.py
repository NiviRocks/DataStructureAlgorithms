# -*- coding: utf-8 -*-
"""
Created on Mon Jan  3 21:08:54 2022

@author: LENOVO
"""

''' INSERTION SORT'''

def insertion_sort(lst): #my code -> CORRECT OUTPUT AND COMPLEXITY
    itera=0
    for i in range(1,len(lst)):
        itera+=1 #count iteration
        ind=i # ind will get changed as lst[i] value gets placed at its right position
        j=i-1
        while j>=0 and lst[j]>lst[ind]: # enter loop only if lst[ind] is in improper position
            itera+=1
            lst[ind],lst[j]=lst[j],lst[ind] # swap i,j index values
            ind-=1 # lst[i] position gets swapped to i-1 = ind-1 pos
            j-=1
    print("Sorted List:",lst)
    return itera

def isort(lst): #actual code
    itera=0
    for i in range(1,len(lst)):
        itera+=1
        key=lst[i]
        j=i-1
        while j>=0 and key<lst[j]:
            itera+=1
            lst[j+1]=lst[j]
            #print(lst)
            j-=1
        lst[j+1]=key
        #print(lst)
    print("Sorted list:",lst)
    return itera

lst=list(map(int,input("Enter list of nos.:").split()))
c=insertion_sort(lst)
print("Iterations required 1:",c)
#d=isort(lst)
#print("Iterations required 2:",d)

'''
WORST CASE:
Enter list of nos.:10 9 8 7 6 5 4 3 2 1
Sorted List: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Iterations required : 54

AVERAGE CASE:
Enter list of nos.:6 4 7 2 1 5 9 3 10 8
Sorted List: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Iterations required : 26

BEST CASE:
Enter list of nos.:1 2 3 4 5 6 7 8 9 10
Sorted List: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Iterations required : 9
'''