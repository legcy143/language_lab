import  Jwt from "jsonwebtoken"
console.time()
console.log("har har mahadev")

let a = "legcytest"
let secret_salt = "salt"
let secret_code = "12"
function encrypt(x){
    console.log("\nencyrption")
    let half1 = x.slice(0 , x.length/2)
    let half2 = x.slice(x.length/2 , x.length)
    let val = half1 + secret_code + half2 + secret_salt;
    console.log(val)
    return val;
}
function decrypt(x){
    console.log("\ndecyrption")
    let half1 = x.slice(0 , x.length/2)
    let half2 = x.slice(x.length/2 , x.length)
    console.log(half1)
    console.log(half2)
    // console.log(x)
}

let c = encrypt(a);
let d = decrypt(c)

let val = Jwt.decode("eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJtZXNzIjoibG92ZSB5b3UgYnJvIiwiaWF0IjoxNTE2MjM5MDIyfQ.Rz9J0qAgqt2s78t5ytal-uwnbER4LHxsqeg6E_h90T4")
console.log(val.message)

console.timeEnd()


