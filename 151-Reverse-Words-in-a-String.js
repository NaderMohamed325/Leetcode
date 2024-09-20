/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {

let arr = s.split(" ");
// console.log(arr);

let ans = [];
for (let str of arr) {
    if (str.trim()) {  
        ans.push(str.trim());
    }
}

// console.log(ans); 
return ans.reverse().join(" ");

};