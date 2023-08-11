let arrx = [1,2,3,7,5,4]
const sortarr = (arr)=>{
    for (let i = 0; i < arr.length; i++) {
        for (let j = i; j < arr.length; j++) {
            if (arr[i] > arr[j]) {
                let temp = arr[j]
                arr[j] = arr[i]
                arr[i] = temp
            }
        }
    }
}
sortarr(arrx)


let apiCall = 0;
const callapi = (x)=>{
    let arr = ["google.com" , "fb.com" , "youtube.com"]
    console.log("api => ",apiCall)
    if(apiCall <arr.length){
        console.log(arr[apiCall])
    }
    else{
        apiCall = 0
        console.log(arr[apiCall])
    }
    apiCall++;
}
// callapi(12)
// callapi(12)
// callapi(165)


// return multiple value in funciton
// console.log("returning multiple indetifier")
function* run(a){
    yield 12
    yield 112
    yield a
}
// let a = run(1212)
// console.log(a.next())
// console.log(a.next())
// console.log(a.next())

let a = {
    "name" :"prince"
}
let b = {
    name:"prince2"
}
console.log(a.name)
console.log(b.name)






// let abc = "prince"
// let abc1 = "pprriinnccee"
const dublicate = (x)=>{
    let a = x.charAt(0)
    let str =""
    for(let i = 0; i<x.length ; i++ ){
        // console.log("str = " , str)
        if(i%2 == 0){
            str = str + x.charAt(i)
            // console.log(x.charAt(i))
        }
    }
    // console.log("debug dublicate => ", x)
    // console.log("debug dublicate => ", a)
    console.log(str)

}
// dublicate("pprriinnccee")



class xyz{
    constructor(firstName, lastName){
        this.firstName = firstName; 
        this.lastName = lastName; 
    }
    rev(){
        let fullName = this.firstName + this.lastName;
        let str = "";
        for(let i = fullName.length; i>=0 ; i--){
            // console.log(i)
            // console.log(fullName.charAt(i))
            str = str+fullName.charAt(i)
        }
        // console.log("rev" , fullName)
        // console.log("str = >" , str)
        return str
    }
}
let xyzcall = new xyz("prince" , "raj")
// console.log(xyzcall)
// console.log("output => ",xyzcall.rev())
// x , y = string type
// assic



// answer 5
const manipulate = (x , y)=>{
     y = y.toString();
    // console.log(x ,y)
    // console.log("chat = > ",x.charAt(1))
    // console.log("len   = > ",y.length)
    // console.log(y.slice(1 , x.length-1))
    let a = y.charAt(0) + x.slice(1 , x.length -1) + y.charAt(y.length - 1);
    let b = x.charAt(0) + y.slice(1 , y.length -1) + x.charAt(x.length -1);
    console.log("output => ",a , b)

}

// manipulate("prince" , 143)

// search method in js 
let sValue = "ri"

let arr = [
  {_id:123, name: "prince"},
  {_id:125, name: "price"},
  {_id:124, name: "pri"},
  {_id:143, name: "bro"},
]

let filteredArr = arr.filter((e)=>{
   return e = e.name.includes(sValue)
})

console.log(filteredArr)