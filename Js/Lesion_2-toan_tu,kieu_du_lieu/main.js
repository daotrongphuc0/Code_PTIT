

/**
 * toan tu trong javascrip
 * 1. toan tu so hoc + - * / % ** ++ --
 * 2. toan tu gan = += -= *= /= **= 
 * 3. toan tu so sanh > < ==(so sanh gia tri vd: '1'=1) <= >= !=(so sanh gia tri)
    ===(so sanh ca kieu dulieu)
    !==(so sanh ca kieu dulieu)
 *** 4. toan tu logic && || !        chi tra ve kieu du lieu cua 1 trong 2 ve, tuy diue kien say ra
 */

/**
 * toan tu chuoi String operator
 * var a ="DTP"
 * var b ='big star'
 * console.log(a+b)
 */

/**
 * Boolean
 * 0 false ''-"" undefined NaN null -> False
 * con lai la true
 * 
 * !! là 2 lần phủ định. Dây là một “tip” để convert (chuyển đổi) mọi kiểu dữ liệu khác sang Boolean.
 */


/**
 * kieu du lieu nguyen thuy
 * Number
 * String 
 * boolean
 * Underfined
 * Null
 * Symbol la kieu du lieu duy nhat
 * 
 * kieu du lieu phuc tap - Complex data
 * Function
 * Object giong json
 */

/**
 * kiem tra du lieu typeof
 * console.log(typeof a);
 * 
 * note typeof cua boolean -> object
 */
var a =1+2; // toan tu so hoc
console.log(a) 


var _fullName = 'DTP' // toan tu gan
console.log(_fullName)

// string type
var  fullname = 'ab \' c'

// undefined type
var und;

// Null type
var nu = null

// Symbol
var Symbol1 = Symbol('id'); //unique
var Symbol2 = Symbol('id'); // 2 cai nay la khac nhau nen khi so sanh se la gia tri false

// function
var  myfunction = function(){
    alert('xin chao')
}
myfunction();

// Object type
var myobject = {
    name: 'dtp',
    age: 21,
    myfunction: function() {

    }    
};
var array = ['a','b','c'];


