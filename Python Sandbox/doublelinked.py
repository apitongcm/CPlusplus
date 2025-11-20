#Create Node Structure
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

#Creation of new node with assigned value 
node1 = Node(3)
node2 = Node(5)
node3 = Node(13)
node4 = Node(2)
node5 = Node(27)

#Assign the positioning and order of nodes

#For transversing forward
node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

#For transversing backward
node2.prev = node1
node3.prev = node2
node4.prev = node3
node5.prev = node4

#Set starting point which is node1 
currentNode = node1
print("\nFor Transversing forward: ")
#Print every node in forward manner
while currentNode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next
print("null")

#Set starting point which is node1 
currentNode = node5
print("\nFor Transversing backward: ")
#Print every node in forward manner
while currentNode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.prev

#If All nodes are printed return null 
print("null")