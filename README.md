# Decision Trees



~/ <strong> What are decision trees</strong> ?
<ul>
	<li>It is a graphical solution to all the possible solution to a particular decision</li>
	<li>Decision are based on some conditions</li>
	<li>The decisions that are taken can easily be explained</li>
	<li>Decision tree is one of the predictive modelling approach used in machine learning, data mining and statistical calculations</li>
	<li>It is one way to display an algorithm that only contains conditional control statements
</ul>
~/ <strong>Decision tree for programming classes flowchart :</strong><br>
In the below diagram it is demonstrated whether someone would like to take programming classes or not.<br>
~/ <strong>Important terminologies in decision tree :</strong>
<ul>
<li><strong><u>Root Node :</u></strong> The root node represents the whole sample and this further gets divided into two or more homogeneous sets.</li>
<li><strong><u>Leaf Nodes :</u></strong> The nodes that cannot be further segregated to another node.</li>
<li><strong><u>Parent/Child node :</u></strong> The root is the parent node and all other nodes that are branched from the root node are child nodes.</li>
<li><strong><u>Branch/Sub Tree :</u></strong> A branch is formed by splitting the tree into other tree/node</li>
<li><strong><u>Splitting :</u></strong> In splitting on basis of some condition the root node/ sub node is divided into different parts.</li>
<li><strong><u>Pruning :</u></strong> It is a method of removing the unwanted branches from the tree.</li>
</ul>
~/ <strong>How to construct a decision tree ?</strong><br>
<ul>
A tree can be formed by splitting the source set into the subsets based on an attribute value test. This process is done on each derived subset in a recursive way called as recursive partitioning. This recursion calls complete when the node value reaches to the target value or the splitting no longer adds value to the prediction. Decision tree can handle high dimentional data.<br>
</ul>
~/ <strong>Decision tree representation :</strong><br>
<ul>
The decision tree classify the instances by sorting them down from the root to it leaf nodes by some attribute test value. An instance is classified starting form the root and then moving down the tree one by one by testing the attribute specified by the node. This process repeats until it reaches to the leaf node.
</ul>
~/ <strong>How does a tree decide where to split</strong>
<ul>
<li><strong><u>Gini Index :</u></strong> It is the measure of the purity and impurity used in CART algorithm to build a decision tree.</li>
<li><strong><u>Chi Square :</u></strong> This is an algorithm to find out the statistical difference between the root nodes and the sub nodes.</li>
<li><strong><u>Information Gain :</u></strong> The Information Gain is the decrease in the entrophy that occurs when the data set splits on the basis of an attribute. The construction of decision tree is all about finding the attribute that returns the highest information gain.
<li><strong><u>Reduction in variance :</u></strong>Reduction in variance is an algorithm is used for continuous target variable that splits the data set with lower variance.</li>
</ul>
~/ <strong>Types of Decision Tree </strong>
<ul>
There are two types of Decision tree <br>
<li><strong><u>Categorical Variable decision tree :</u></strong> A categorical variable decision tree includes categorical target variables that are divided into categories. The categories mean that every stage of the decision process falls into one of the categories, and there are no in-betweens.
<li><strong><u>Continuous Variable decision tree :</u></strong> A continuous variable decision tree is a decision tree with a continuous target variable. 
</ul>
