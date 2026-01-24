# [Placements](https://www.hackerrank.com/challenges/placements/problem?isFullScreen=true)
## Medium
<div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>You are given three&nbsp;tables:&nbsp;<em>Students</em>,<em> Friends </em>and<em> Packages.</em>&nbsp;<em>Students</em> contains two columns: <em>ID</em>&nbsp;and <em>Name</em>. <em>Friends</em> contains two columns: <em>ID</em> and <em>Friend_ID</em> (<em>ID</em> of the ONLY best friend). <em>Packages</em>&nbsp;contains two columns: <em>ID</em> and <em>Salary</em> (offered salary in $&nbsp;thousands&nbsp;per month).</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12895/1443820186-2a9b4939a8-1.png"></p>

<p>Write a query to output the names of those students whose&nbsp;best friends got offered a higher salary than them. Names must be ordered by the salary amount offered to the best friends. It is guaranteed that no two students got same salary offer.</p>

<p><strong>Sample Input</strong></p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12895/1443820079-9bd1e231b1-2_1.png">
<img src="https://s3.amazonaws.com/hr-challenge-images/12895/1443820100-adb691b2f5-2_2.png"></p>

<p><strong>Sample Output</strong></p>

<pre><code>Samantha
Julia
Scarlet
</code></pre>

<p><br>
<strong>Explanation</strong></p>

<p>See the following table:</p>

<p><img src="https://s3.amazonaws.com/hr-challenge-images/12895/1443819966-c37c146d27-3.png"></p>

<p>Now,</p>

<ul>
    <li><em>Samantha's</em> best friend got offered a higher salary than her at 11.55</li>
    <li><em>Julia's</em> best friend got offered a higher salary than her at 12.12</li>
    <li><em>Scarlet's</em> best friend got offered a higher salary than her at 15.2</li>
    <li><em>Ashley's</em> best friend did NOT get offered a higher salary than her</li>
</ul>

<p>The name output, when ordered by the salary offered to their friends, will be:</p>

<ul>
    <li><em>Samantha</em></li>
    <li><em>Julia</em></li>
    <li><em>Scarlet</em></li>
</ul></div></div></div></div>