#Create Node Structure
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def assignNodes(value1, value2, value3, value4, value5):
    #Creation of new node with assigned value 
    node1 = Node(value1)
    node2 = Node(value2)
    node3 = Node(value3)
    node4 = Node(value4)
    node5 = Node(value5)

    #Assign the positioning and order of nodes
    node1.next = node2
    node2.next = node3
    node3.next = node4
    node4.next = node5

    return node1,node2,node3,node4,node5