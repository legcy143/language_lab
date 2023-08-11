let  a = {
    name:"prince",
    e(){
        console.log("hii " , this.name)
    }
}
const p = ()=>{
    console.log( "name => ",this.name)
}

let b = {
    name:"raj"
}

console.log(a.name)
// a.e.call()
a.e()
a.e.call(b)
p.call(a.name)

const sum = (a)=>{
    let val = 0;
    for(let i of a){
      val += i;
      console.log(i , " and " , a)
    }
    console.log("sum => " , val)
  }
  
  let c = [1 , 4 , 5]
  sum(c)
  

