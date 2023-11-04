console.log("hii there today we gona learn varibale in javascript");


// diffrence between var let const

var a1 = "var ."
let a2 = "let . ";
const a3 = "const .";

// redeclare variable in global scope
var a1 = "rahhu" 
// we can not redecale vcaribale with let and const
// only var identifer (eg . a1) will redecale or updated


// udpate 
// we only update var and let identifier value not const value 
a1 = "updated var ."
a2 = "updated let ."
// console.log("v1 a1 => ", a1, "\na2 => ", a2, "\na3 => ", a3)

// scope varibale

if(true){
    // 
    var a1 = "if if var"
    let a2 = "in if let"
    const a3 = "in if const"
    console.log("in if a1 => ", a1, "\na2 => ", a2, "\na3 => ", a3)
}

function func(){
    var a1 = "var inside func" 
    let a2 = "let inside func" 
    const a3 = "const inside func" 
    console.log("funtion => ", a1, "\na2 => ", a2, "\na3 => ", a3)
}
func()
function funcUpdateGlobal(){
     a1 = "var inside func update gloabl" 
    a2 = "let inside func update global" 
    // we acannot update a3 because it's const value
    //  a3 = "const inside func update global" 
    console.log("funtion => ", a1, "\na2 => ", a2, "\na3 => ", a3)
}
funcUpdateGlobal()

console.log("global : \na1=> ", a1, "\na2 => ", a2, "\na3 => ", a3)

