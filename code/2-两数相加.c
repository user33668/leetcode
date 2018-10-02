//给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。

//你可以假设除了数字 0 之外，这两个数字都不会以零开头。

//示例：

//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3;
    struct ListNode** end = &l3;
    int num1,num2;
    int carry = 0;

    while(l1 || l2 || carry){
        //malloc
        *end = (struct ListNode*)malloc(sizeof(struct ListNode));
        (**end).next = NULL; //这一行放到最后就不行
                             //报错member access within misaligned address 0x000000000031 for type 'struct ListNode', which requires 8 
        //get num
        num1 = l1 ? l1->val : 0 ;
        num2 = l2 ? l2->val : 0 ;
        //calcu
        (**end).val = num1 + num2 + carry;
              carry = (**end).val / 10;
        (**end).val = (**end).val % 10;
        //next
        l1 = l1 ? l1->next : NULL;
        l2 = l2 ? l2->next : NULL;
        end = &(**end).next;
    }
    
    
    return l3;
}
