#Pseudo Code 
#1 - create structure of Node
#2 - create function to delete a node    
#3 - create nodes with assigned values 
#4 - create flow of nodes 
#5 - print output 


#1 
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None

#5
def transversal(startNode):
    currentNode =startNode

    while currentNode:
        print(currentNode.data, end=" -> ")
        currentNode = currentNode.next
    print("null")

#2 
def delNode(startNode, targetNode):

    #case: if startNode (first element in the linked list) is also the targetNode
    if startNode == targetNode:
        return startNode.next

    currentNode = startNode

    #Finding the target node to be deleted
    while currentNode.next and currentNode.next != targetNode:
        currentNode = currentNode.next

    #case: safe-guard if the following nodeToDelete does not exist in the list. 
    if currentNode.next is None:
        return startNode
    print(currentNode.next.next.data)
    currentNode.next = currentNode.next.next
    return startNode

#3 
node1 = Node(4)
node2 = Node(25)
node3 = Node(13)
node4 = Node(1)
node5 = 'test'
#4
node1.next =node2
node2.next = node3
node3.next = node4

#5
transversal(node1)
node1 = delNode(node1,node3)
transversal(node1)