int bs(int A[], int l , int r , int val){
	while(l<=r){
		int mid = l + (r-l)/2;
		if(A[mid] == val) return mid+1;
		if(A[mid] < val) l = mid + 1;
		else r = mid-1;
	}return -1;
}