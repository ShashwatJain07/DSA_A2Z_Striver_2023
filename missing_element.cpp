#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	//int diff=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==arr[i+1]){
			i++;
		}
		else 
			return arr[i];
	}
	return 0;
	//optimal approach is XOR all elements and then the elements
	// with odd occurence would become 1 and even occurence 0 so 
	//a xor b = A.(~B) + (~A).B

	/*for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
	*/
}