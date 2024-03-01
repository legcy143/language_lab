
var a1 = 1;
let a2 = 2;
const a3 = 123;

let arr = [1 , 2 ,3 ,4 ,5];

// console.clear()
// > >= == === < <=
if(a2>a1){ //true
    console.log("a1 is grt")
}else{
    console.log("a2 is grt")
}

// 
// console.clear()
async function abc(){
    try {
        let res = await fetch("");
        let data = await res.json()
        // console.log("inside fn ",data)
        return data;
    } catch (error) {return -1 }
}

(async ()=>{
    let func = await abc();
    console.log("outisde of func",func)
})();