# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head, p1, p2= ListNode(-1), l1, l2
        tail = head #β���
        carry = 0;  #��λ
        while p1 and p2:
            num = p1.val + p2.val + carry
            if num > 9:
                num -= 10
                carry = 1
            else:
                carry = 0
            # ��ӽ��
            tail.next = ListNode(num)
            tail = tail.next
            # �ƶ�������
            p1 = p1.next
            p2 = p2.next
        # ȡ��������������ʣ�µĲ���
        if p2: 
            p1 = p2
        while p1:
            num = p1.val + carry
            if (num > 9):
                num -= 10
                carry = 1
            else:
                carry = 0
            
            tail.next = ListNode(num)
            tail = tail.next
            
            p1 = p1.next
        # �������н�λ���ٷ���һ�����
        if carry:
            tail.next = ListNode(1)
            tail = tail.next
        tail.next = None    # ��������β
        return head.next    #ȥ���յ�ͷ���

        
                
        