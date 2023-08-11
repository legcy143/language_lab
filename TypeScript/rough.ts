function isPalindrome(x: number): boolean {
    let b: string = x.toString()
    let output: boolean = true;
    let len: number = b.length - 1
    for (let i: number = 0; i <= len; i++, len--) {
        if(b[i] !== b[len]){
            output = false;
            break;
        }
    }

    return output;
};
