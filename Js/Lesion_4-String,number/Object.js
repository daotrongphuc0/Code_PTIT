

var  adress = 'adress'

var myinfo = {
    name: 'DTP', // thuoc tinh
    age:18,
    [adress]: 'Tb',
    getName: function(){    //phuong thuc
        return this.name;
    }
}
myinfo.email = "DTP@gmail.com" // k su dung cho Object contructor

delete myinfo.adress


console.log(myinfo.age)

console.log(myinfo['age'])   // dung khi tim kiem thong tin theo key = ...
console.log(myinfo.getName())


// Object contructor


function user(fn,ln,age){
    this.fn =fn;
    this.ln =ln;
    this.age = age;

}


var author  = new user('d','p',21)
authe.xxx ="xxx" // thuoc tinh rieng

console.log(author.constructor ===user); // = true, kiem tra lai cau truc doi tuong


// Object   prototype


user.prototype.xxx  ="xx" // tao thuoc tinh them, co the dung cho function , k nhan gia tri dc tu ham khoi tao

// doi tuong Date
 var date = new Date(); // object
// var date = Date(); // string

console.log(date.getMonth) // 0->11  muon lay phai +1
// Math object    --- k the khoi tao contructor

/**
 * Math.PI  --so pi
 * Math.round()  -- lam tron theo moc 0.5*
 * Math.abs()  -- tri tuyet doi
 * Math.ceil()   - lam tron len
 * Math.floor() -- lam tron xuong
 * Math.random()   --tao so ngau nhien tu 0-1
 * Math.min()   -  truyen vao mag gt
 * Math.max()   -  truyen vao mag gt
 */
