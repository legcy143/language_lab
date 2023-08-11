let val = Math.floor(Math.random() * 100)
let a = 100;

const sum = (a) => {
  let val = 0;
  for (let i of a) {
    val += i;
    console.log(i, " and ", a)
  }
  console.log("sum => ", val)
}

let b = [1, 4, 5]

console.log(b.reverse())


// let date = Date.now().toLocaleString()

const date = new Date().toLocaleString();
let arr = [
  {
    "_id": 3860,
    "date": "21/6/2023, 11:58:21 am",
    "description": "what about you",
    "title": "hii it's me"
  },
  {
    "_id": 23481,
    "date": "21/6/2023, 11:58:51 am",
    "description": "nice to see that", "title": "this is 2nd "
  }
]

let c = arr.filter((e)=>e = e._id == 3860)
console.log("c filter " ,c)