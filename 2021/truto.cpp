string tru(string a, string b) {
	while (a.size() < b.size()) a = "0" + a;
	while (a.size() > b.size()) b = "0" + b;
	int nho = 0,tong=0;
	string c = "";
	for (int i = a.size() - 1; i >= 0; i--) {
		tong = a[i] - b[i] - nho;
		if (tong < 0) {
			tong += 10;
			nho = 1;
		}else nho = 0;
		c = ((char) (H % 10 + 48)) + c;
	}
	while (c.size() > 1 && c[0] == '0')
		c.erase(0, 1);
	return c;
}