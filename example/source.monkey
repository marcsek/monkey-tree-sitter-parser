let a = fn(a, b, c) {
  return 1;
}

if (a) {
  return true;
} else {
  return false;
}

""
"daco";

-a;
--a
!1
!!!1

2 + b
a * b

a + b * c

a + b < a * c
(a + b) * c

[]
[1]
[1, 2]
let arr = [1, 2, 3]

{}
{1:2}
{1:3, 2:3}
{1:3, 2:2, 3:1}

a[1]
[1,2,3][1][1](2)
{1:2}["daco"]

fn(a) {}(1)
a(1)

let fibonacci = fn(x) {
	if (x == 0) {
		return 0;
	} else {
		if (x == 1) {
			return 1;
		} else {
			fibonacci(x - 1) + fibonacci(x - 2);
		}
	}
};

fibonacci(35);
