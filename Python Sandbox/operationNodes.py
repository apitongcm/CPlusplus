def deleteNode(startNode, targetNode):

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

def findMinimum(startnode):

    #5
    minValue = startnode.data
    currentNode = startnode

    while currentNode:
        if minValue > currentNode.data:
            minValue = currentNode.data
        
        #print(minValue) - added for debugging
        currentNode = currentNode.next
        
    return minValue

def insertNode(head, newNode, position):

    if position == 1: 
        newNode.next = head

    currentNode = head

    for _ in range(position-2):

        if currentNode is None:
            break

        currentNode = currentNode.next
    
    newNode.next = currentNode.next
    currentNode.next = newNode

    return head