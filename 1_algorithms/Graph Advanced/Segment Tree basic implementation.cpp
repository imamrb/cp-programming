#include <bits/stdc++.h>
using namespace std;
#define MAX     (int)1e5+7

int A[MAX], tree[MAX*4];

void build(int node, int start, int en)
{
    if (start == en) {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else {
        int mid = (start + en) / 2;
        // Recurse on the left child
        build(2 * node, start, mid);
        // Recurse on the right child
        build(2 * node + 1, mid + 1, en);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}
void update(int node, int start, int en, int idx, int val)
{
    if (start == en) {  // Leaf node
        A[idx] += val;
        tree[node] += val;
    }
    else {
        int mid = (start + en) / 2;
        if (start <= idx and idx <= mid) {
            // If idx is in the left child, recurse on the left child else right
            update(2 * node, start, mid, idx, val);
        }
        else {
            update(2 * node + 1, mid + 1, en, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}
int query(int node, int start, int en, int l, int r)
{
    if (r < start or en < l) {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if (l <= start and en <= r) {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + en) / 2;
    int p1 = query(2 * node, start, mid, l, r);
    int p2 = query(2 * node + 1, mid + 1, en, l, r);
    return (p1 + p2);
}
int main()
{
   int newer[] = {18, 17, 13, 19, 15, 11, 20};
   A[0] = 0;
   copy(newer, newer+7, A);
  int n = sizeof(newer)/sizeof(newer[0]);         // the original array
  build(1, 1, n);

  printf("              idx    0, 1, 2, 3, 4,  5, 6\n");
  printf("              A is {18,17,13,19,15, 11,20}\n");
  printf("RMQ(1, 3) = %d\n", query(1, 1, n, 1, 3));             // answer = index 2
//  printf("RMQ(4, 6) = %d\n", st.rmq(4, 6));             // answer = index 5
//  printf("RMQ(3, 4) = %d\n", st.rmq(3, 4));             // answer = index 4
//  printf("RMQ(0, 0) = %d\n", st.rmq(0, 0));             // answer = index 0
//  printf("RMQ(0, 1) = %d\n", st.rmq(0, 1));             // answer = index 1
//  printf("RMQ(0, 6) = %d\n", st.rmq(0, 6));             // answer = index 5

}
