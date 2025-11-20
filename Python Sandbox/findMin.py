#Pseudo code 
#1- create Node structure
#2 - create Finding Min value function 
#3 - create nodes with assigned value
#4 - createa nodes flow and positioning 
#5 - create min_value = index 0
#6 - print minimum value 

#1
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

#2 
def findMin(startnode):

    #5
    minValue = startnode.data
    currentNode = startnode

    while currentNode:
        if minValue > currentNode.data:
            minValue = currentNode.data
        
        #print(minValue) - added for debugging
        currentNode = currentNode.next
        
    return minValue

#3 
node1 = Node(25)
node2 = Node(12)
node3 = Node(6)
node4 = Node(1)
node5 = Node(9)

#4
node1.next =node2
node2.next =node3
node3.next = node4
node4.next = node5

#6
print("smallest number is: " ,findMin(node1))


