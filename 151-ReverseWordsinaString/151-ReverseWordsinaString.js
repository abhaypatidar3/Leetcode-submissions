// Last updated: 7/22/2025, 12:11:04 AM
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    s=s.trim();
    let arr = s.split(" ");
    for(let i=0;i<arr.length;i++){
        if(arr[i]==" " ||  arr[i]=="" || arr[i]=="  "){
            arr.splice(i,1);
            i--;
        }
        arr[i]=arr[i].trim();
    }
    arr.reverse();
    let s1 = arr[0];
    for(let i=1;i<arr.length;i++){
        s1 = s1 + " " + arr[i];
    }
    return s1;
};