**Q1. Three Activities : Learning **: Sort indices in one array (0,1,2,3,....,n-1) according to values in another array (15,10,20,25,1) .. 
How??
vector<int> na(n),nb(n),nc(n);
iota(na.begin(),na.end(),0);        // iota arranges the array (1,2,3,4,5...) 
sort(na.begin(),na.end(), [&] (int i,int j) {return a[i]>a[j];});    // a is are original array 
