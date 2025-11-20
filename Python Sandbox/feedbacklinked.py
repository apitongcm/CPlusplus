#Pseudocode
#1 - create structure node 
#2 - create nodes and assign values to them
#3 - create flow and positioning of nodes 
#4 - identify start node
#5 - print nodes

#1
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

#2 
node1 = Node(5)
node2 = Node(27)
node3 = Node(4)

#3 
node1.next = node2
node2.next = node3
node3.next = node1

#4
startnode = node1
currentNode = node1

#5
print(currentNode.data, end=" -> ")
currentNode = node1.next

while currentNode != startnode:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next
print('...')
