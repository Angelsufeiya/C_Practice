//
//考拉有n个字符串字符串，任意两个字符串长度都是不同的。考拉最近学习到有两种字符串的排序方法 :
//1.根 据字符串的字典序排序。例如 :
//"car" < "carriage" < "cats" < "doggies < "koala"
//2.根据字符串的长度排序。例如 : "car" < "cats" < "koala" <
//"doggies" < "carriage"
//考拉想知道自己的这些字符串排列顺序是否满足这两种排序方法，考拉要忙着吃树叶，所以需要你来帮忙验 证。
//输入描述 :
//输入第一行为字符串个数n(n ≤ 100) 接下来的n行, 每行一个字符串, 字符串长度均小于100，均由小写字母组成
//输出描述 : 如果这些字符串是根据字典序排列而不是根据长度排列输出"lexicographically",
//	   如果根据长度排列而不是字典序排列输出"lengths",
//	   如果两种方式都符合输出"both"，否则输出"none" 示例1 :
//	   输入
//	   3
//	   a
//	   aa
//	   bbb
//	   输出
//	   both
//
//
//
//
//   标题 : 求最小公倍数 | 时间限制 : 1秒 | 内存限制 : 32768K
//		正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小 公倍数。
//	输入描述 : 输入两个正整数A和B。
//	   输出描述 : 输出A和B的最小公倍数。
//		  示例1 :
//输入
//5  7
//输出
//35