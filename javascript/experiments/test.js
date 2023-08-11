
import {  parentPort } from 'worker_threads';

let a = 1000000000;
let c = 0;
while (a--) {
  c++;
}
parentPort.postMessage(c);
// console.log("A")

// let a = "r"
// export default a