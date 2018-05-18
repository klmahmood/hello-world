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




(empty line)

[comment]: # (This actually is the most platform independent comment)

<!--
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
