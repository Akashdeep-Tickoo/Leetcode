/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = (n)=>{
    let count;
    let flag=false;
    const ans=()=>{
        if(flag==false)
            {
                flag=true;
                count=n;
                return count;
            }
        else
            {
                count=count+1;
                return count;
            }
    }
    return ans;
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */