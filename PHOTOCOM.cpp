#include<iostream>
#include<algorithm>
//#include<unordered_map>
#define gc getchar
#define ll long long
using namespace std;


int main() {
	ll t, r1, c1, r2, c2, r, c, rf,cf, count, a1, b1, a2, b2, cr1, cr2, cc1 ,cc2;
	char a;
//	unordered_map<ll, unordered_map<ll, bool>> image1, image2;
	cin >> t;
	while (t--) {
		count = 0;
		//Capture Image 1
		cin >> r1 >> c1;
		a = gc();
		while (a == 32 || a == 10) {
			a = gc();
		}
		c = 0, r = 0;
		for (; (a == 48 || a == 49) && r < r1; a = gc()) {
			if (c == c1) {
				r++;
				c = 0;
			}
			//image1[r][c++] = a - 48;
			c++;
		}
		//Capture Image 2
		cin >> r2 >> c2;
		a = gc();
		while (a == 32 || a == 10) {
			a = gc();
		}
		c = 0, r = 0;
		for (; (a == 48 || a == 49) && r < r2; a = gc()) {
			if (c == c2) {
				r++;
				c = 0;
			}
			//image2[r][c++] = a-48;
			c++;
		}
		//Image Capturing Done!
		//Image Processing...
		cout << __gcd(r1, r2) << endl;
		cout << __gcd(c1, c2) << endl;
		rf = (r1*r2)/__gcd(r1, r2);
		cf = (c1*c2) / __gcd(c1, c2);
		a1 = rf / r1;
		a2 = rf / r2;
		b1 = cf / c1;
		b2 = cf / c2;
		cr1 = cr2 = cc1 = cc2 = -1;
		cout << "HEllo";
		cout << rf << " " << cf << " " << a1 << " " << a2 << " " << b1 << " " << b2 << " ";
		for (int i = 0; i < rf; i++) {
			if (i%a1 == 0) {
				cr1++;
			}
			if (i%a2 == 0) {
				cr2++;
			}
			for (int j = 0; j < cf; j++) {
				if (j%b1 == 0) {
					cc1++;
				}
				if (j%b2== 0) {
					cc2++;
				}
				/*if (image1[cr1][cc1] == image2[cr2][cc2]) {
					count++;
				}*/
			}
		}
		cout << count << "\n";
		//image1.clear();
		//image2.clear();
	}
}
