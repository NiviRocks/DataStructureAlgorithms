'''
This in-place sorting algorithm works with Complexity O(n + r).

Consider list L with n integers from range [0,r) that is, 0 <= i < r .
Where, i are the elements in list L.
Such that n>>r. 
'''
# CODE
def sortInRange(L,r):
    dict={}
    for i in range(r): # O(r)
        dict[i]=0
        
    for ele in L: # O(n)
        dict[ele]+=1
    i=0
    front=0
    while i < r: # O(r)
        back=dict[i]
        L[front:back]=[i]*dict[i]
        front=back
        i+=1
#__main__
L1=list(eval(input("Enter List of numbers:")))
sortInRange(L1)
print(L1)

