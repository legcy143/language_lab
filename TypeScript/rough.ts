let  numsv:number[] = [1,3,-1,-3,5,3,6,7]
let  kv:number = 3

function maxSlidingWindow(nums: number[], k: number): number[] {
    let res : number[] = [1];
    for (let i = 0; i < nums.length - 2; i++) {
        nums.slice(i , 3)
    }
    return res;
};


