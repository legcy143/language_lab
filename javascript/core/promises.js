let b = "prince"
const a = new Promise((resolve , reject)=>{
    setTimeout(() => {
        b = "raj"
        resolve()
    }, 2000);
})

a.then((e)=>{
    console.log(b)
})
console.log("outside => ",b)