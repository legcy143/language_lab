console.log("har har mahadev")

let obj = {
    a1:11,
    a2:22,
    a3:33,
    a4:44,
    a5:55,
}
// console.log(obj)
// delete obj.a3;
// console.log(obj)

// console.log(Object.entries(obj))
// "for of" is used for iteration and "for in" is also used for iteraion but on objects
// for(let key in obj){
//     console.log({key})
// }
// for(let [key , value] of Object.entries(obj)){
//     console.log(key ," -> ", value)
// }

let obj2 = obj // pass by refrence
console.log(obj , "\n" , obj2)
obj2.a1 = 111;
console.log(obj , "\n" , obj2)
