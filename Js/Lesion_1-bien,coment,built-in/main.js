
/**
 * mot so ham built-in
 * alert
 * console
 * confirm
 * prompt
 * set timeout
 * set interval
 */

//alert("Hi javascrip")  : hien thi thong bao 

// cu phap js : co the co dau ; hoac khong, co thi ms co the viet code cung dong
/*
- comment 1 dong : //
- coment nhieu dong: /** 
*/

var _fullName = "Dao Trong Phuc";  // bien trong js
alert(_fullName) // tai 1 thoi diem chi hien thi duoc 1 alert nen khi co nhieu alert, no se hien thi lan luot

console.log('hien thi ra cu so console') //hien thi bt
console.error('hien thi ra cu so console') //hien thi loi (do)
console.warn('hien thi ra cu so console') //hien thi canh bao (vang)

confirm('xac nhan Message')

prompt('gui message va nhan input')

setTimeout(function() {     
    alert('set thoi gian chay function')
},1000) //cho 1s roi chay function

setInterval(function() {     
    console.log('chay function theo chu ki')
},1000) //chay function theo chu ki 1s  
