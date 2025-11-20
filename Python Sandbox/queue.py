#Slack
#1-push
#2-pop
#3-peek
#4-isEmpty
#5-size

class Slack:
    def __init__(self):
        self.slack = []

    def push(self,element):
        self.slack.append(element)

    def pop(self):

        if self.isEmpty():
            return "Slack is empty"
        self.slack.pop()

    def peek(self):

        if self.isEmpty():
            return "Slack is empty"
        return self.slack[-1]

    def isEmpty(self):
        return len(self.slack) == 0
    
    def size(self):
        return len(self.slack)
    
class Queue: 
    def __init__(self):
        self.queue = []

    def push(self, element):
        self.queue.append(element)

    def pop(self):
        if self.isEmpty():
            return "Queue is empty"
        self.queue.pop(0)

    def peek(self):
        if self.isEmpty():
            return "Queue is empty"
        return self.queue[-1]
    
    def isEmpty(self):
        return len(self.queue) == 0
    
    def size(self):
        return len(self.queue)
    
class PrioQueue: 
    def __init__(self, priority):
        self.prioqueue = []
    
myslack = Slack()
myqueue = Queue()

myslack.push('A')
myslack.push('B')
myslack.push('C')

myqueue.push('D')
myqueue.push('E')
myqueue.push('F')

print("stack: ", myslack.slack)

myslack.pop()
print("slack: ", myslack.slack)

print("have a peak: ", myslack.peek())

print("is the Slack Empty: ", myslack.isEmpty())

print("The size of the Stack: ", myslack.size())

print("queue: ", myqueue.queue)
myqueue.pop()
myqueue.pop()
print("queue: ", myqueue.queue)
print("have a peak: ", myqueue.peek())
print("is the Queue Empty: ", myqueue.isEmpty())
print("The size of the Queue: ", myqueue.size())