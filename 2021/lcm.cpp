int lcm(int x, int y){
	int Lcm = x*y/ gcd_(x,y);
	return Lcm;
}