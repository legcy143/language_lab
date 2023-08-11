const x = 0
console.log("hello")
const arr = [
[2, 3, 1],
[4, 5, 4], 
[5, 9, 6] 
]

let done = 0

arr.forEach((e,i)=>{
	if(done !== arr[0].length ){
    console.log(e[done])
    done++
	}
})