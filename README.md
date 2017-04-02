## Natural Interpreted Computer English (NICE)
A very fake toy language.

#### Installation
Compile source using `gcc interpreter.c -o interpreter`

#### Rules and Examples

There are essentially only two rules. Place variables inside circular brackets. Place literals inside double quotes.

The interpreter understands the following commands: create, assign, print, join, copy, remove, compare, find, replace, if.

Have a look at the examples to get an idea. You will be able to figure out other commands using these(Thats the idea behind the project :) ).

Examples:

~~~
create (s1)
assign "Hello " to (s1)
print (s1)
create (s2)
assign "World!" to (s2)
join (s1) and (s2)
print (s1)
~~~
