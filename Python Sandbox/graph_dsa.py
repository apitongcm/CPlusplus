#Activity for the topic: Graph Algorithm
from collections import deque
import sys
import time

MICROSECONDS = 1000000
#Dataset 
graph = {
    'A': ['B','C'],
    'B': ['A','D','E'],
    'C': ['A','F'],
    'D': ['B'],
    'E': ['B', 'F'],
    'F': ['C','E']
}


#Breadth-First Search 
def BreadthFirstSearch(graph,startpoint):
    
    #create temporary storage 
    visited = set()

    queue = deque([startpoint])

    while queue:

        node = queue.popleft()

        #not yet visited the node
        if node not in visited:
            print(node, end=" ")

            visited.add(node)
            #if the element in the graph is not found in the visited list then append element
            queue.extend(
                element for element in graph[node]
                if element not in visited )
   


#Depth-First Search 
def DepthFirstSearch(graph, start, visited = None):
    

    if visited is None:
        visited = set()

    print(start, end=" ")
    visited.add(start)

    #recursive
    for element in graph[start]:
        if element not in visited:  
            DepthFirstSearch(graph,element,visited)


#Shortest path
def ShortestPath(graph, start, end):
    

    visited = set()
    queue = deque([start])

    while queue:

        path = queue.popleft()
        #start in the right part of the list
        node = path[-1]

        #reach end
        if node == end: 
            return path
        #if not yet reach end 
        elif node not in visited:

            for element in graph[node]:
                new_path = list(path)
                new_path.append(element)
                queue.append(new_path)
            visited.add(node)


def main():

    if len(sys.argv) < 2:
        print("\n Usage:")
        print(" python3 graph_dsa.py breadth\n")
        print(" python3 graph_dsa.py depth\n")
        print(" pyton3 graph_dsa.py shortestPath")
        sys.exit(1)
    
    start = time.time()

    instruction = sys.argv[1]
    match instruction:
        case "breadth":
            print("\n BFS Transversal")
            BreadthFirstSearch( graph,'A')
        case "depth":
            print("\n DFS Transversal")   
            DepthFirstSearch(graph,'A')
        case "shortestPath":
            print("\nShortest Path:")
            print(ShortestPath(graph,'A','F'))
        case _:
            print("Invalid command.")
    elapsed = (time.time() - start)*MICROSECONDS
    print("\n")
    print(f"Process execution time: {elapsed:.3f} microseconds")
    
    


if __name__ == "__main__":
    main()