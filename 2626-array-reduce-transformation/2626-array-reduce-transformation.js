/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    if(nums.length==0)
        {
            return init;
        }
    
    
    nums.forEach((item,index)=>{
        init=fn(init,item,index);
    })
    return init;
    
    
};