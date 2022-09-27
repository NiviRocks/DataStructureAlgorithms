''' INSERTION SORT '''

def isort(lst): 
    for i in range(1,len(lst)):
        key=lst[i]
        j=i-1
        while j>=0 and key<lst[j]:
            lst[j+1]=lst[j]
            j-=1
        lst[j+1]=key
    return lst

lst=list(map(int,input("Enter list of nos.:").split()))
sort_lst=insertion_sort(lst)
print("Sorted list:",sort_lst)

'''
WORST CASE:
Enter list of nos.:10 9 8 7 6 5 4 3 2 1
Sorted List: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Iterations required : 54
----------------------------------------------
AVERAGE CASE:
Enter list of nos.:6 4 7 2 1 5 9 3 10 8
Sorted List: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Iterations required : 26
----------------------------------------------
BEST CASE:
Enter list of nos.:1 2 3 4 5 6 7 8 9 10
Sorted List: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Iterations required : 9
----------------------------------------------
'''
