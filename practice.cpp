#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).
#define int long long
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
// const int mod = 1e9 + 7;
// const int mod = 998244353;
// const ld eps = 1e-12;

// const int N = (int)3e5 + 5;
// int fac[N];
// inv inv[N];
void accept(vector<int>&vec) {
	for (auto &i : vec)cin >> i;
}
void display(vector<int>&vec) {
	for (auto i : vec)cout << i << " "; cout << endl;
}
// int binaryexp_mod(int x,int n){
//     if(n==0)return 1;
//     if(n&1) return (x*binaryexp_mod((x*x)%mod, (n-1)/2)%mod)%mod;
//     return binaryexp_mod((x*x)%mod,n/2)%mod;
// }
// int binaryexp(int x, int n){
//     if(n==0)return 1;
//     if(n&1) return x*binaryexp(x*x,(n-1)/2);
//     return binaryexp((x*x),n/2);
// }
// int inverse(int n){int inv = binaryexp_mod(n,mod-2); return inv;}        // CAN BE USED only when mod is prime or it is coprime with the number

// This will work when MOD IS PRIME
// int ncr(int n, int r){
//     if(r==0 || r==n)return 1;
//     if((r>n) || (n<0) || (r<0)) return 0;
//     int dr = (inv[r] * inv[n-r]) % mod;
//     return (fac[n] * dr)%mod;
// }

// To be used when MODULO is not required and value of ncr <= 1e18
// int ncr(int n, int r){
//     int ans = 1;
//     for(int i=1;i<=r;i++){
//         ans *= (n-i+1);
//         ans /= i;
//     }
//     return ans;
// }

// void sieve(){
//     vi vec((int)1e6+1,1);  // 1->indicates prime, 0 indicates not prime
//     vec[0] = 0, vec[1] = 0;
//     for(int i = 2;i*i <= 1e6;i++){
//         if(vec[i]){
//             for(int j=i*i;j <= 1e6;j+=i) vec[j] = 0;
//         }
//     }
// }

void main_() {
	//implement your solution here

#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("inputA.txt", "r", stdin);
	// for writing output to output.txt
	freopen("outputA.txt", "w", stdout);
#endif
	fast;
	// fac[0] = 1;
	// for(int i=1;i<N;i++){
	//    fac[i] = (fac[i-1]*i)%mod;
	//    inv[i] = inverse(fac[i]);
	// }
	int t = 1; cin >> t;
	for (int i = 1; i <= t; i++) {
		int ans = 0;
		cout << "Case #" << i << ": ";
		cout << ans << endl;
	}
}
static void run_with_stack_size(void (*func)(void), size_t stsize) {
	char *stack, *send;
	stack = (char *)malloc(stsize);
	send = stack + stsize - 16;
	send = (char *)((uintptr_t)send / 16 * 16);
	asm volatile(
	    "mov %%esp, (%0)\n"
	    "mov %0, %%esp\n"
	    :
	    : "r"(send));
	func();
	asm volatile("mov (%0), %%esp\n" : : "r"(send));
	free(stack);
	// "esp" is for 32-bit compilers, "rsp" is for 64-bit compilers
}
int32_t main() {
	run_with_stack_size(main_, 512 * 1024 * 1024); // To run with a 512 MB stack
	return 0;
}
