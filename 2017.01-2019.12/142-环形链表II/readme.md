# 分析

方法一：
	快慢指针p,q
	P每次移动1
	q每次移动2
	如果p和q相遇,则有环
	如果q到末尾,则无环

	确定有环后
	将慢指针p放在head
	p,q同时移动1
	直到相遇，相遇点即为入环点


# 程序见本文件夹