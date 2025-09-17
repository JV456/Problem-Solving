class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        # Create a dummy node to handle edge cases (like duplicates at the head)
        dummy = ListNode(0)
        dummy.next = head
        prev = dummy  # prev points to the last node before the duplicate sequence
        curr = head   # curr is the iterator

        while curr:
            # Check if current node starts a duplicate sequence
            is_duplicate = False
            while curr.next and curr.val == curr.next.val:
                curr = curr.next
                is_duplicate = True
            if is_duplicate:
                # Skip all duplicates
                prev.next = curr.next
            else:
                # No duplicate, move prev forward
                prev = prev.next
            curr = curr.next  # Move to the next node

        return dummy.next