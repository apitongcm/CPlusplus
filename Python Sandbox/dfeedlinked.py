#Pseudo code 
#1 - create Node Structure
#2 - create nodes with values 
#3 - create flow and positioning of nodes
#4 - identify startnode
#5 - print output

#1
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

#2 
node1 = Node(3)
node2 = Node(45)
node3 = Node('A')
node4 = Node("test")

#3
node1.next = node2
node2.next = node3 
node3.next = node4
node4.next = node1

node1.prev = node4
node2.prev = node1
node3.prev = node2 
node4.prev = node3

#4 
startNodeFw =node1
startNodeBw =node4

currentNode = startNodeFw

print("\n For Transversing Forward: ")
print(currentNode.data, end=" -> ")
currentNode = node1.next

#5
#for transversing forward 
while currentNode != startNodeFw:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.next
print("...")

#4
currentNode = startNodeBw

print("\n For Transversing Backward: ")
print(currentNode.data, end=" -> ")
currentNode = currentNode.prev

#5
#for transversing backward 
while currentNode != startNodeBw:
    print(currentNode.data, end=" -> ")
    currentNode = currentNode.prev
print("...")


