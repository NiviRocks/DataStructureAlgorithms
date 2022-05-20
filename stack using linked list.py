class Node: 
    def __init__(self,item=None):
        self.data=item
        self.next=None
        
class Stack:
    #class attributes to be called like <cls name>.var
    TOP=-1 # index of latest value entered
    MAX=-1 # maximum length of stack
    HEAD=Node()    # HEAD is an objectof class Node with data=None
    def overflow():
        return Stack.TOP==Stack.MAX-1
    
    def underflow():
        return Stack.TOP==-1
    
    def push(item):
        if Stack.TOP==-1:
            Stack.HEAD.next=Node(item) # entering first item 
            Stack.TOP+=1
        elif Stack.overflow():
            print("OVERFLOW")
            return
        else:
            curr=Stack.HEAD
            # finding the last node to insert new node
            while curr.next!=None: 
                curr=curr.next
            curr.next=Node(item) 
            # new node inserted and linked with last node of stack
            Stack.TOP+=1
        print(f"{i} succesfully pushed")
    
    def pop():
        if Stack.underflow():
            print("UNDERFLOW")
        else:
            curr=Stack.HEAD
            while curr.next.next!=None: # want the 2nd last element of stack
                curr=curr.next
            print(f"{curr.next.data} is popped") #data to be popped
            curr.next=None 
            # now curr is 2nd last element of stack, last element deleted
            Stack.TOP-=1
            
    def display():
        curr=Stack.HEAD
        if Stack.underflow():
            print("UNDERFLOW")
            return
        # HEAD.data =None , no need to print this
        while curr.next!=None:
            curr=curr.next
            print(f"{curr.data}",end="->") 
        print("None") # last node's next value
            
#__main__

n=int(input("Enter max size of Stack:"))
Stack.MAX=n
while 1:
    choose=int(input('Enter : 1-Push ; 2-Pop ; 3-Display ; 4-Exit:'))
    if choose==1:
        i=int(input("Enter item:"))
        res=Stack.push(i)            
    elif choose==2:
        res=Stack.pop()
    elif choose==3:
        Stack.display()
    else:
        print("Out of loop!")
        break
            
