#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).
// #define int long long
#define ld long double
#define pb push_back
#define endl '\n'           // remove for interactive problem
#define pii pair<int,int>
#define fi first
#define se second
#define vi vector<int>
#define vvi vector<vi>
#define vpii vector<pii>
#define all(vec) vec.begin(),vec.end()
#define fsort(vec) sort(all(vec))
#define rsort(vec) sort(vec.rbegin(), vec.rend())
#define rev(vec) reverse(all(vec))
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define setbits(x)  __builtin_popcountll(x)
#define clz(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctzll(x)
#define gcd(a,b) __gcd(a,b)
#define max_ele(vec) *(max_element(all(vec)))
#define min_ele(vec) *(min_element(all(vec)))



// void main_() {
//	implement your solution here
// 	fast;
// #ifndef ONLINE_JUDGE
// 	// for getting input from input.txt
// 	freopen("input.txt", "r", stdin);
// 	// for writing output to output.txt
// 	freopen("output.txt", "w", stdout);
// #endif
// 	int t; cin >> t;
// 	while (t--) {
// 		int n, d, k; cin >> n >> d >> k;
// 		vpii vec(k);
// 		ordered_set st_lower, st_upper;
// 		for (auto &i : vec) {
// 			cin >> i.fi >> i.se;
// 			st_lower.insert(i.fi);
// 			st_upper.insert(i.se);
// 		}
// 		int maxm = 0, maxm_ind = -1;
// 		int minm = 1e9, minm_ind = -1;
// 		for (int i = 1; i <= (n - d + 1); i++) {
// 			// [i,i+d-1]
// 			int cnt = n;
// 			cnt -= st_upper.order_of_key(i);
// 			int cnt1 = n - st_lower.order_of_key(i + d);
// 			cnt -= cnt1;
// 			if (cnt > maxm) {
// 				maxm = cnt;
// 				maxm_ind = i;
// 			}
// 			if (cnt < minm) {
// 				minm = cnt;
// 				minm_ind = i;
// 			}
// 		}
// 		cout << maxm_ind << " " << minm_ind << endl;
// 	}
// }
// static void run_with_stack_size(void (*func)(void), size_t stsize) {
// 	char *stack, *send;
// 	stack = (char *)malloc(stsize);
// 	send = stack + stsize - 16;
// 	send = (char *)((uintptr_t)send / 16 * 16);
// 	asm volatile(
// 	    "mov %%esp, (%0)\n"
// 	    "mov %0, %%esp\n"
// 	    :
// 	    : "r"(send));
// 	func();
// 	asm volatile("mov (%0), %%esp\n" : : "r"(send));
// 	free(stack);
// }
// int32_t main() {
// 	run_with_stack_size(main_, 256 * 256 * 256); // run with a 1 GiB stack
// 	return 0;
// }

int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		int n, d, k; cin >> n >> d >> k;
		vpii vec(k);
		ordered_set st_lower, st_upper;
		for (auto &i : vec) {
			cin >> i.fi >> i.se;
			st_lower.insert(i.fi);
			st_upper.insert(i.se);
		}
		int maxm = 0, maxm_ind = -1;
		int minm = 1e9, minm_ind = -1;
		for (int i = 1; i <= (n - d + 1); i++) {
			// [i,i+d-1]
			int cnt = n;
			cnt -= st_upper.order_of_key(i);
			int cnt1 = n - st_lower.order_of_key(i + d);
			cnt -= cnt1;
			if (cnt > maxm) {
				maxm = cnt;
				maxm_ind = i;
			}
			if (cnt < minm) {
				minm = cnt;
				minm_ind = i;
			}
		}
		cout << maxm_ind << " " << minm_ind << endl;
	}
	return 0;
}