class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
    def show(self):
        t1=self
        while not t1.next == None:
            print(t1.val)
            t1=t1.next
        print(t1.val)



def addTwoNumbers(l1, l2):
    a = 1
    while not l1.next == None:
        a = a + 1
        l1 = l1.next
    b = 1
    while not l2.next == None:
        l2 = l2.next
        b = b + 1

    return [a,b]

    """    
    if b > a : 
        l3 = l1
        l1 = l2 
        l2 = l3
    
    l3 = l1
    
    while not l2.next = None:
        l1.val=l1.val+l2.val
        if l1.val > 9:
            l1.val=l1.val - 10
            l1.next.val = l1.next.val + 1


    """


l1 = ListNode(1)
l2 = ListNode(2)
l3 = ListNode(3)
l4 = ListNode(4)
l1.next = l2
l2.next = l3

print(addTwoNumbers(l1, l4))

print("====")

l1.show()
