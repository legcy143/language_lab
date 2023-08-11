let a = -1234
let b = a.toString()
let len = b.length -1
for (let i = 0; i <= len; i++, len--) {
    console.log(i , " and len " , len)
    // if(b[i] !== b[len]){
    //     output = false;
    //     break;
    // }
}