// Array.isArray()   kiem tra xem co phai la array k


var languages = [
    'python',
    'python',
    'python',
    123,
];

var aray = new Array('python',
'python',
'python',)

console.log(languages)

console.log(languages.length)

console.log(languages[0])

/**
 * ToString     languages.toString()   tao thanh chuoi
 * Join         languages.join(' ')   tao thanh chuoi ngan cach bang dau ' ' 
 * pop          languages.pop()     xoa cuoi va tra ve phan tu do
 * push         languages.push()   them cuoi   (them nhieu doi so de them nhieu phan tu va cuoi)
 * shift         languages.shift()     xoa dau va tra ve phan tu do
 * unshift      languages.punshift()   them dau   (them nhieu doi so de them nhieu phan tu vao dau)
 * Splicing     language.splice(1,2)    xoa tu phan tu co id =1 va xoa 2 pt, doi so thu 2 = 0 thi k xoa pt nao
 *              language.splice(1,0,'abc') chen them gia tri abc vao vi tri 1
 *              language.splice(1,1,'abc') thay the pt 1 thanh abc
 * concat       language.concat(array)   noi array vao language
 * slice        language.slice(1,2) cat tu vi tri 1 den vi tri 2,  cat den het thi bo doi so thu 2, giong lat cat trong py
 */

/**
 * Array methods:  ==> cu phap giong nhau, ngung lai khi thoa man torng vong lap
 * forEach() // duyet qua tung phan tu mang
 * every()  // true khi tat ca phan tu dung yeu cau, va ngc lai, giong  hop
 * some() // nguoc lai voi every  ,giong giao
 * find()  tim kiem phan tu dau tien
 * filter()   tim kiem tat ca phan tu
 * map()   sd khi thay doi dl array, tra ve dl return
 * reduce() 
 */


 var languagess1 = [
    {
        id:1,
        name:'py',
    },
    {
        id:2,
        name:'java',
    },
    {
        id:3,
        name:'js',
    }
];


languagess1.forEach(function(language1, index){
    console.log(index,language1);
});


//map 
var newlang = languagess1.map(function(language1){    //fun co the nhan them tham so index , originArray
    return {
        id: language1.id,
        name: language1.name,
        xxx: 1,
    }
})


//reduce 
//doi so 1 la bien luu tru, gia tri tai 1 vong lap cua bien luu tru, gia tri index vong lap
// doi so 4 arrray ban dau, thay doi doi so 4 la thay doi array truyen vao
// tham so dung thu tu , k can dung ten
function hamthuchien(accumulator, currentValue, currentIndex, originArray){
    return // return cai gi thi accumulator luu tru cai do
}

var x= languagess1.reduce(hamthuchien,0)  // initial value =0, khi k co thi lay gia tri phan tu dau tien va gti tra ve la object


//ung dung reduce : lamf phang mang(flat)
var depthArray = [1 ,2, [3,4],5 ,6, [7,8,9]]
var flatArray = depthArray.reduce(function(a,b){
    return a.concat(b)
},[])


// include method ---dung trong array va string

//strig
var title = 'Responsive web design';

console.log(title.includes('Responsive')); // true
console.log(title.includes('Responsive'),2); // false       tim tu vi tri 2
//array  tuong tu string
//co the nhan gia tri am , nhung no se chay tu do dai cua mang + gtri am