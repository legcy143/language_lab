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
    console.log(arr)
}
sortarr(arrx)



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
    console.log("output answer 3 => ", str)

}
dublicate("pprriinnccee")


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

console.log(filteredArr)


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
console.log(dataArr)
