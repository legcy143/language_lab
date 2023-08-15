let str = "string str"
let arr = [1 , 2 , -2,5 , 4 ,3]

String.prototype.show = function(){
    console.log("hii" , this)
}
Array.prototype.printArray = function(){
    const res = this.length ? this[this.length-1] : -1;
    console.log(res)
}

str.show();
arr.printArray();

console.log(arr.sort())