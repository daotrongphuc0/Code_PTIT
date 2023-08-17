// khởi tạo String:
var string1 = "DTP" // cach nay nhanh hon

var string2= new String('BS') // type of : object

console.log(string1.length) // đo độ dài chuỗi

console.log(`toi la: ${string1} ${string2}`) // nối chuỗi

// Find index // k tìm được trả về -1

console.log(string1.indexOf('D')) // tìm chữ D
console.log(string1.indexOf('D',3)) // tìm chữ D sau vi tri thu 3
console.log(string1.lastIndexOf('D')) // tìm chữ D cuối dùng
console.log(string1.search('D')) //tìm chu D và có thể tìm biểu thức chính quy

// cut string ---- có thể nhận tham số âm
console.log(string1.slice(2,3))// cắt từ chữ thứ 2 đến chữ thứ 3
console.log(string1.slice(2))// cắt từ 2 đến hết
console.log(string1.slice()) // copy

// replace
console.log(string1.replace("D",'A')) // thay thế kí tự D đầu tiên bằng A
console.log(string1.replace(/D/g,'A')) // thay thế kí tự tất cả D bằng A, /D/g la bieu thuc chinh quy

// convert to upper, lower
console.log(string1.toUpperCase()) // chuyen chu hoa
console.log(string1.toLowerCase()) // chuyen chu thuong

// trim
console.log(string1.trim()) // loại bỏ khoảng trắng thừa 2 đầu

//split
var language = 'VN, han, TQ'
console.log(language.split(', ')) // cắt tu
console.log(language.split('')) // cắt tu 

// get string by index
console.log(language.charAt(2)) // cắt tu

