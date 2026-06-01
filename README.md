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
