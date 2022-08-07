class Solution{
    public:

int countVowelPermutation(int n) {
	long long int a = 1, e = 1, i = 1, o = 1, u = 1, mod = 1e9 + 7;
	for (int k = 2; k<= n; k++) {
		long long int a1=a, i1=i, e1=e, o1 =o, u1=u;
		a = e1;
		e = a1 + i1;
		i = a1 + e1 + o1 + u1;
		o = i1 + u1;
		u = a1;
		
		a%= mod, e%= mod, i%= mod, o%=mod, u%= mod;
	}
	return (a + e + i + o + u) % mod;
}
};