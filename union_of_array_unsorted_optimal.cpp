// Union of 2 arrays 
// A union B = A + B +  A intersection B 
//Optimal approach which would even work on unsorted arrays present in comments in the end

vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> arr;
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    //arr.back checks the last element to ensure no suplicate is present
    //arr.empty is for the i,j=0 when we have to push the first element into 
    //our merged array
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (arr.empty() || a[i] != arr.back()) {
                arr.push_back(a[i]);
            }
            i++;
        } else if (a[i] > b[j]) {
            if (arr.empty() || b[j] != arr.back()) {
                arr.push_back(b[j]);
            }
            j++;
        } else { // a[i] == b[j]
            if (arr.empty() || a[i] != arr.back()) {
                arr.push_back(a[i]);
            }
            i++;j++;
        }
    }
// only one of the 2 next while loops would get activated as for the case
//when one array is larger than the second array
    while (i < n) {
        if (arr.empty() || a[i] != arr.back()) {
            arr.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (arr.empty() || b[j] != arr.back()) {
            arr.push_back(b[j]);
        }
        j++;
    }

    return arr;
}

// Optimal approach
    /*
    vector<int> ans;
    set<int> st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;
    */

