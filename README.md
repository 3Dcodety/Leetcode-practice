# Leetcode-practice

## 1.🌲 Tree 题目分类

<details>
<summary><b>点击展开 / 收起 Tree 题目列表</b></summary>

这里是有关树（Tree）的题目链接：

1. [94. 二叉树的中序遍历 (Binary Tree Inorder Traversal)](https://leetcode.cn/problems/binary-tree-inorder-traversal/) —— 🟢 Easy
2. [102. 二叉树的层序遍历 (Binary Tree Level Order Traversal)](https://leetcode.cn/problems/binary-tree-level-order-traversal/) —— 🟡 Medium
3. [104. 二叉树的最大深度 (Maximum Depth of Binary Tree)](https://leetcode.cn/problems/maximum-depth-of-binary-tree/) —— 🟢 Easy
4. [124. 二叉树中的最大路径和 (Binary Tree Maximum Path Sum)](https://leetcode.cn/problems/binary-tree-maximum-path-sum/) —— 🔴 Hard

</details>

## 2.🕸️ Graph (图) 题目分类

<details>
<summary><b>点击展开 / 收起 Graph 题目列表</b></summary>

这里是有关图与最短路径算法（Dijkstra / Bellman-Ford 等）的题目链接：

1. [743. 网络延迟时间 (Network Delay Time)](https://leetcode.cn/problems/network-delay-time/) —— 🟡 Medium
   - *注：纯正单源最短路径模板题，考察对信号“并行多路扩散”物理意义的理解，结算时利用 `max_element` 捕捉最远点或未连通的 `inf` 标志。*
2. [787. K 站中转内最便宜的航班 (Cheapest Flights Within K Stops)](https://leetcode.cn/problems/cheapest-flights-within-k-stops/) —— 🟡 Medium
   - *注：带步数/资源限制的最短路径变形题。可使用控制循环次数的 Bellman-Ford，亦可通过引入 `min_cost` + `min_stops` 的双纪录黄金剪枝，或升级为 `dist[dot][used]` 二维状态分层图的堆优化 Dijkstra 解决。*

</details>
## 3.🔗 Linked List (链表) 题目分类

<details>
<summary><b>点击展开 / 收起 Linked List 题目列表</b></summary>

这里是有关链表（Linked List）的基础与经典操作题目链接：

1. [21. 合并两个有序链表 (Merge Two Sorted Lists)](https://leetcode.cn/problems/merge-two-sorted-lists/) —— 🟢 Easy
   - *注：利用虚拟头节点（Dummy Node）简化边界，配合归并双指针同步遍历。*
2. [83. 删除排序链表中的重复元素 (Remove Duplicates from Sorted List)](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/) —— 🟢 Easy
   - *注：单指针去重。由于链表已排序，相同元素必然相邻，遍历时若满足后继节点值相等则直接执行跳过操作。*
3. [206. 反转链表 (Reverse Linked List)](https://leetcode.cn/problems/reverse-linked-list/) —— 🟢 Easy
   - *注：链表基本功。双指针迭代修改 `next` 指向，注意临时变量暂存后继节点以防断链。*
4. [876. 链表的中间结点 (Middle of the Linked List)](https://leetcode.cn/problems/middle-of-the-linked-list/) —— 🟢 Easy
   - *注：快慢指针（龟兔赛跑）典型应用。快指针步长为 2，慢指针步长为 1，快指针触底时慢指针自然落在线性表的中点。*

</details>
