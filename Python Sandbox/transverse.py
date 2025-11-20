def transversal(startNode):
    currentNode =startNode

    while currentNode:
        print(currentNode.data, end=" -> ")
        currentNode = currentNode.next
    print("null")