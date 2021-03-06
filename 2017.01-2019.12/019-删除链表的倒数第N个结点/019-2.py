﻿# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        if not head:
            return None
        p=q=head
        for i in range(n):
            p=p.next
        if not p:
            return head.next
        while p.next:
            p=p.next
            q=q.next
        q.next=q.next.next
        return head