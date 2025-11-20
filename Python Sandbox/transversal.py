#Pseudo code 
#1 - create structure of Node
#2 - create function for printing output
#3 - create nodes with assigned value 
#4 - create flow and positioning 
#5 - call function 

#1
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

#2 
def printNode(startNode):
    currentNode = startNode
    while currentNode:
        print(currentNode.data, end= " -> ")
        currentNode = currentNode.next
    print("null")

#3 
node1 = Node("hello")
node2 = Node("world")
node3 = Node(12)
node4 = Node('A')

#4 
node1.next = node2
node2.next = node3 
node3.next = node4

#5
printNode(node1)
printNode(node3)