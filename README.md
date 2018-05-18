Hello World, Now yes the relative_link!


```cpp
{% include_relative 11172_relational_operator.cpp %}
```

Here is the original github markdown.

```cpp
//*************************************************************************************//
//        Problem  : 11172 - Relational Operator
//        Language : ANSI C
//        Comment  : Very easy, Ad hoc
// 	  Status   : AC
//*************************************************************************************//

#include <stdio.h>
int main() {
  int TC, a, b;
  scanf("%d", &TC);
  while (TC--) {
    scanf("%d %d", &a, &b);
    if (a < b) printf("<\n");
    if (a > b) printf(">\n");
    if (a == b) printf("=\n");
  }
  return 0;
}
```


| Tables        | Are           | Cool  |
| ------------- |:-------------:| -----:|
| col 3 is      | right-aligned | $1600 |
| col 2 is      | centered      |   $12 |
| zebra stripes | are neat      |    $1 |



Colons can be used to align columns.

| Problem        |   Note         | Src  | Language |
| ------------- |:-------------:| -----:|-----:|
| 12060 - all integer average| note | src  | Java |



(empty line)

[comment]: # (This actually is the most platform independent comment)

<!--
  include_relative src/chapter1/chapter 2/12060_all_integer_average.cpp
 [I'm an inline-style link](https://www.google.com)
Notes for Me:
Formatted.
Cross-platform
Tested.
-->


(empty line)
[comment]: # (Notes for Me:
Formatted.
Cross-platform
Tested.)
