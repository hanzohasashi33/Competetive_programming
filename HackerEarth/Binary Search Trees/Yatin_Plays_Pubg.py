# Write your code here
# Write your code here
class Node :
    def __init__(self,key) :
        self.key = key 
        self.left = None 
        self.right = None 


def insert(root,key) :
    if root is None :
        return Node(key) 
    
    if key < root.key :
        root.left = insert(root.left,key)
    else :
        root.right = insert(root.right,key)

    return root 

def inorder(root) :
    if root :
        inorder(root.left)
        print(root.key,end = " ")
        inorder(root.right)

def kills(root) :
    if root is None :
        return 0 
    return max(kills(root.left),kills(root.right)) + 1


if __name__ == "__main__" :
    test = int(input())
    while test > 0 :
        n = int(input())
        l = list(map(int,input().split()))
        root = None 
        for i in l :
            root = insert(root,i)
        #inorder(root)
        #print()
        kill = kills(root)
        print(kill)
        test -= 1
