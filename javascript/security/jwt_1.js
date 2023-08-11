import Jwt from "jsonwebtoken"
console.log("har har mahadev \n" )

let SECRET_JWT = "prince"

const user = {
    _id:12124545,
    name:"prince",
    roll:150
}

// verify token and first get another decoded token and extract id from that 

// encrypt jwt in user side  and decrypt while use lets check

let jwtToken = Jwt.sign({id:user._id , text:"raj" ,} , SECRET_JWT , { expiresIn: '1000ms' })
// console.log("jwt token sign",jwtToken)

let verifyJwt = Jwt.verify(jwtToken , SECRET_JWT)
// console.log("verifyJwt => " , verifyJwt)