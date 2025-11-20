#Pseudo code
#1- create a Node structure
#2 - create a nodes with assigned value 
#3 - create a flow of nodes 
#4 - create a function for inserting nodes 
    #parameters: header, newNode, position
    #4.1 - case: if the newNode is insert in the first element of the list
    #       if the position is 1, then set newNode.next = head

#5 - print output to validate

#1-3
from initNode import assignNodes, Node
from transverse import transversal
from operationNodes import deleteNode, findMinimum, insertNode


node1, node2, node3, node4, node5 = assignNodes(3,5,7,11,25)
#5
transversal(node1)
node1 = deleteNode(node1,node3)
transversal(node1)
print("the minimum value is: ", findMinimum(node1))

newNode = Node(100)
position = 4
node1 = insertNode(node1,newNode,position)
transversal(node1)