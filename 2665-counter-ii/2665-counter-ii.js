/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    
    let ans={
        original:init,
        curr:init,
        increment(){
            this.curr+=1;
            return this.curr;
        },
        decrement(){
            this.curr-=1;
            return this.curr;
        },
        reset(){
            this.curr=this.original;
            return this.curr;
        }
    }
    return ans;
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */