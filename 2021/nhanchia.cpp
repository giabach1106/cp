string Multiply(string a, int b) {
	int c, carry = 0;
	string d, T = "";
	for (int i = a.size() - 1; i >= 0; i--) {
		c = (a[i] - 48) * b + carry;
		carry = c / 10;
		T = ((char) (c % 10 + 48)) + T;
	}
	
	d = "";
	if (carry > 0) {
		ostringstream convert;
		convert << carry;
		d = convert.str();
	}
	
	T = d + T;
	while (T.size() > 1 && T[0] == '0')
		T.erase(0, 1);
	return T;
}
