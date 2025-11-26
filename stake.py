class Stack:
    def __init__(self):
        self.stack = []
    
    def push(self, value):
        self.stack.append(value)
    
    def pop(self):
        if self.isEmpity():
            return "Stack is empty"
        return self.stack.pop()
    def peek(self):
        if self.isEmpity():
            return "Stack is empty"
        return self.stack[-1]
    def isEmpity(self):
        return len(self.stack) == 0
    def stackSize(self):
        return len(self.stack)
    
myStack = Stack()
myStack.push(3)
print(myStack.stackSize())