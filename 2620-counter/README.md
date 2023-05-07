<h2><a href="https://leetcode.com/problems/counter/">2620. Counter</a></h2><h3>Easy</h3><hr><div style="null;/*startDM*/undefined/*endDM*/"><p style="null;/*startDM*/undefined/*endDM*/">Given an integer&nbsp;<code style="null;/*startDM*/undefined/*endDM*/">n</code>,&nbsp;return a <code style="null;/*startDM*/undefined/*endDM*/">counter</code> function. This <code style="null;/*startDM*/undefined/*endDM*/">counter</code> function initially returns&nbsp;<code style="null;/*startDM*/undefined/*endDM*/">n</code>&nbsp;and then returns 1 more than the previous value every subsequent time it is called (<code style="null;/*startDM*/undefined/*endDM*/">n</code>, <code style="null;/*startDM*/undefined/*endDM*/">n + 1</code>, <code style="null;/*startDM*/undefined/*endDM*/">n + 2</code>, etc).</p>

<p style="null;/*startDM*/undefined/*endDM*/">&nbsp;</p>
<p style="null;/*startDM*/undefined/*endDM*/"><strong class="example" style="null;/*startDM*/undefined/*endDM*/">Example 1:</strong></p>

<pre style="null;/*startDM*/undefined/*endDM*/"><strong style="null;/*startDM*/undefined/*endDM*/">Input:</strong> 
n = 10 
["call","call","call"]
<strong style="null;/*startDM*/undefined/*endDM*/">Output:</strong> [10,11,12]
<strong style="null;/*startDM*/undefined/*endDM*/">Explanation: 
</strong>counter() = 10 // The first time counter() is called, it returns n.
counter() = 11 // Returns 1 more than the previous time.
counter() = 12 // Returns 1 more than the previous time.
</pre>

<p style="null;/*startDM*/undefined/*endDM*/"><strong class="example" style="null;/*startDM*/undefined/*endDM*/">Example 2:</strong></p>

<pre style="null;/*startDM*/undefined/*endDM*/"><strong style="null;/*startDM*/undefined/*endDM*/">Input:</strong> 
n = -2
["call","call","call","call","call"]
<strong style="null;/*startDM*/undefined/*endDM*/">Output:</strong> [-2,-1,0,1,2]
<strong style="null;/*startDM*/undefined/*endDM*/">Explanation:</strong> counter() initially returns -2. Then increases after each sebsequent call.
</pre>

<p style="null;/*startDM*/undefined/*endDM*/">&nbsp;</p>
<p style="null;/*startDM*/undefined/*endDM*/"><strong style="null;/*startDM*/undefined/*endDM*/">Constraints:</strong></p>

<ul style="null;/*startDM*/undefined/*endDM*/">
	<li style="null;/*startDM*/undefined/*endDM*/"><code style="null;/*startDM*/undefined/*endDM*/">-1000<sup style="null;/*startDM*/undefined/*endDM*/">&nbsp;</sup>&lt;= n &lt;= 1000</code></li>
	<li style="null;/*startDM*/undefined/*endDM*/"><code style="null;/*startDM*/undefined/*endDM*/">At most 1000 calls to counter() will be made</code></li>
</ul>
</div>