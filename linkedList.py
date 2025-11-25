class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def traverseList(head):
    current_node = head
    while current_node:
        print(current_node.data, end=" -> ")
        current_node = current_node.next
    print("null")
def deleteSpecificNode(head, nodeToDelete):
    if head == nodeToDelete:
        return head.next
    current_node = head
    while current_node.next and current_node.next != nodeToDelete:
        current_node = current_node.next

    if current_node.next ==  None:
        return head
    
    current_node.next = current_node.next.next

    return head

node1 = Node(7)
node2 = Node(11)
node3 = Node(3)
node4 = Node(2)
node5 = Node(9)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

traverseList(node1)