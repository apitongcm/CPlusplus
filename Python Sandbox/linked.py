#Create Node Structure
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

#Creation of new node with assigned value 
node1 = Node(3)
node2 = Node(5)
node3 = Node(13)
node4 = Node(2)
node5 = Node(27)

#Assign the positioning and order of nodes
node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

#Set starting point which is node1 
currentNode = node1

#Print every node
while currentNode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next

#If All nodes are printed return null 
print("null")