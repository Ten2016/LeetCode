# 分析

方法：
	...
	...
	同样采用二分查找
	若中间数小于最右边的数，则右半段有序
	若中间数大于最右边的数，则左半段有序
	只要在有序的半段里用首尾两个数组来判断目标值是否在这一区域内
	就可以确定保留哪半边了


# 程序见本文件夹