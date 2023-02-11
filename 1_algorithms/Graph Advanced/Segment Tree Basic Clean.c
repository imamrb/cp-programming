
#include <bits/stdc++.h>
using namespace std;

void build(int node, int start, int en){

    if (start == en) tree[node] = A[start];
    else {
        int mid = (start + en) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, en);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}
void update(int node, int start, int en, int idx, int val){
    if (start == en) {  // Leaf node
        A[idx] += val;
        tree[node] += val;
    }
    else {
        int mid = (start + en) / 2;
        if (start <= idx and idx <= mid){
            update(2 * node, start, mid, idx, val);
        }
        else {
            update(2 * node + 1, mid + 1, en, idx, val);
        }
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
}
