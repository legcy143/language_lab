"use strict";
function isPalindrome(x) {
    let b = x.toString();
    let output = true;
    let len = b.length - 1;
    for (let i = 0; i <= len; i++, len--) {
        if (b[i] !== b[len]) {
            output = false;
            break;
        }
    }
    return output;
}
;
