﻿/*
n为结点个数,m为边的数量
最短路:
	1.单源最短路
		1-1.权值均为正数
			1-1-1.朴素Dijkstra算法,时间复杂度为O(n^2),常用于稠密图(m = n^2)
			1-1-2.堆优化Dijkstra算法,时间复杂度为O(mlogn),常用于稀疏图(m = n)
		1-2.权值含有负数
			1-2-1.Bellman-Ford算法,时间复杂度为O(nm)
			1-2-2.SPFA算法,时间复杂度为O(m),最坏退化为O(nm)
	2.多源汇最短路
		2-1.Floyd算法,时间复杂度为O(n^3)

难点:将具体的应用场景抽象为结点与边的关系,即如何建图
*/