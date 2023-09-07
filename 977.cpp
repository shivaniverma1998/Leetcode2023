//squares of array in sorted form 
int res[]  ek resultant array 
int n = a.size()
int l =0 , r= n-1

int k = n-1    // resultant array ko reverse iterate krenge
while(l<=r)    jab tak l r se chot hau
if(a[l ]> = a[r]) {
    return res[k] = a[l]   *  a[l]
    l++
    k--
else 
    return a[k] = a[r] * a[r] 
    r--
    k--   
}
return res    // last me return krwaa denge resulatnt array ko jisme value rakhi h 
