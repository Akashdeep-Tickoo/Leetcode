/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    arr.forEach((item,index)=>{
        arr[index]=fn(item,index);
    })
    return arr;
};