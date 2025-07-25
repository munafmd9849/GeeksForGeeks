<h2><a href="https://www.geeksforgeeks.org/problems/spiral-matrix--141631/1?page=6&category=Matrix&sortBy=difficulty">Spiral Matrix</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix of size<strong> N x M</strong>. You have&nbsp;to find the <strong>K<sup>th</sup></strong> element which will&nbsp;obtain&nbsp;while traversing the matrix <strong>spirally</strong> starting from the top-left corner of the matrix.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 3, M = 3, K = 4
A[] = {</span><span style="font-size:18px">{1, 2, 3}, 
       {4, 5, 6},&nbsp;
       {7, 8, 9</span><span style="font-size:18px">}}</span>
<span style="font-size:18px"><strong>Output:</strong> 
6</span>
<span style="font-size:18px"><strong>Explanation: </strong>Spiral traversal of matrix: 
{1, 2, 3, 6, 9, 8, 7, 4, 5}. Fourth element
is 6.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 2, M = 2, K = 2 
A[] = {</span><span style="font-size:18px">{1, 2},
       {3, 4}</span><span style="font-size:18px">}</span> 
<span style="font-size:18px"><strong>Output:</strong> 
2
<strong>Explanation: </strong>Spiral traversal of matrix: 
{1, 2, 4, 3}. Second element is 2.</span></pre>

<p><span style="font-size:18px"><strong>Your Task: </strong>&nbsp;<br>
You don't need to read input or print anything. Complete the function <strong>findK()</strong> which takes the matrix <strong>A[ ][ ]</strong>, number of rows <strong>N</strong>, number of columns <strong>M</strong>, and integer <strong>K</strong> as input parameters and returns the<strong> K<sup>th</sup> </strong>element in the spiral traversal of the matrix.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*M)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ K&nbsp;≤ N*M ≤ 10<sup>6</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>constructive algo</code>&nbsp;<code>Data Structures</code>&nbsp;