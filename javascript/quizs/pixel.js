console.log("har har mahadev");

// 1 - black , 0 - white

const img = [
    [1],[0],[1],
    [0],[0],[1],
    [1],[1],[0]
]

const arr  = [
    [0, 1 , 0 , 1 ,1],
    [1, 0 , 1 , 0 ,0],
    [0, 1 , 1 , 1 ,0],
    [1, 1 , 0 , 0 ,0],
    [1, 0 , 1 , 0 ,1],
  ]

const image  = [
    [0],[1],[0],[1],[1],
    [1],[0],[1],[0],[0],
    [0],[1],[1],[1],[0],
    [1],[1],[0],[0],[0],
    [1],[0],[1],[0],[1],
  ]
let arrval = 10;
  let mat = Math.sqrt(image.length);
  let lastline = mat*(mat - 1);
  let gap = Math.ceil(mat/2);
for (let i = 0; i <image.length; i++) {
    if(i <= mat || i >= lastline -1 ){
        image[i] = (image[i] == 0 ?  [arrval] : image[i])
    }
    else if(i<=lastline){
        if(i>mat+gap && i<lastline - gap+1){
            let temp = i
            image[temp] = (image[temp] == 0 ?  [arrval] : image[i])
            image[temp+1] = (image[temp + 1] == 0 ?  [arrval] : image[i])
            i = i + gap+1;
        }
    }

};
console.log("\nafter change ")
console.log(image)
