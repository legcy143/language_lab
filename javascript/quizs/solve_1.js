// anser 1 //sortubg array
let arrx = [1, 2, 3, 7, 5, 4]
const sortarr = (arr) => {
    for (let i = 0; i < arr.length; i++) {
        for (let j = i; j < arr.length; j++) {
            if (arr[i] > arr[j]) {
                let temp = arr[j]
                arr[j] = arr[i]
                arr[i] = temp
            }
        }
    }
    return arr;
}
let ans1 = sortarr(arrx)
console.log("ans 1 (sorting) => " , ans1)


// answer 2 // change api route after each hit
let apiCall = 0;
const callapi = (x) => {
    let arr = ["google.com", "fb.com", "youtube.com"]
    // console.log("api request => ",apiCall)
    if (apiCall < arr.length) {
        console.log("output anser 2 => ", arr[apiCall])
    }
    else {
        apiCall = 0
        console.log("output anser 2 => ", arr[apiCall])
    }
    apiCall++;
}
callapi(12)
callapi(12)
callapi(16)


// answer 3 remove dublicates from strings
const dublicate = (x) => {
    let a = x.charAt(0)
    let str = ""
    for (let i = 0; i < x.length; i++) {
        if (i % 2 == 0) {
            str = str + x.charAt(i)
        }
    }
    return str;
    
}
let ans3 = dublicate("pprriinnccee")
console.log("ans 3 => ", ans3)


// answer 4 // reverse a name and then change it in there original state
class xyz {
    constructor(firstName, lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }
    rev() {
        let fullName = this.firstName + this.lastName;
        let str = "";
        for (let i = fullName.length; i >= 0; i--) {
            str = str + fullName.charAt(i)
        }
        return str
    }
}
let xyzcall = new xyz("prince", "raj")
// console.log(xyzcall)
console.log("output answer 4 => ", xyzcall.rev())


// answer 5 // manipulate two argument 
const manipulate = (x, y) => {
    y = y.toString();
    let a = y.charAt(0) + x.slice(1, x.length - 1) + y.charAt(y.length - 1);
    let b = x.charAt(0) + y.slice(1, y.length - 1) + x.charAt(x.length - 1);
    console.log("output answer 5 => ", a, b)

}

manipulate("prince", 143)


// Answer 6 search or filter product
let sValue = "ri"

let arr = [
    { _id: 123, name: "prince" },
    { _id: 125, name: "price" },
    { _id: 124, name: "pri" },
    { _id: 143, name: "bro" },
]

let filteredArr = arr.filter((e) => {
    return e = e.name.includes(sValue)
})

console.log("ans 6 => ",filteredArr)


// Answer 7 // remove _id and return object
let dataArr = [
    { _id: 1, name: "prince1" },
    { _id: 2, name: "prince2" },
    { _id: 3, name: "prince3" },
    { _id: 4, name: "prince4" }
];
dataArr = arr.map((e) => {
    let { _id, ...newObj } = e;
    return newObj
})
console.log("ans 7 => ", dataArr)

//ans 8 two sum problem
//expected Output: [8,9,9,9,0,0,0,1]

function sumOftwoList(l1 , l2) {
    let itrate = l1.length >= l2.length ? l1.length : l2.length

    let output = [];
    let carry = 0;
    
    for (let i = 0; i < itrate || carry; i++) {
        l1[i] = (l1[i] === undefined) ? 0 : l1[i]
        l2[i] = (l2[i] === undefined) ? 0 : l2[i]
        
        let sum = l1[i] + l2[i] + carry;
        carry = 0;
        if (sum <= 9) {
            output.push(sum)
        }
        else {
            let lastVal = sum % 10;
            carry += 1;
            output.push(lastVal)
        }
    }
    return output
}

let l1 = [9, 9, 9, 9, 9, 9, 9], l2 = [9, 9, 9, 9]
let ans8  = sumOftwoList(l1 , l2)
console.log("ans 8  => ", ans8)
