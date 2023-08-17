function show(){
    //code
    alert('xin chao')
}

show()

function writelog(message, message2){ //message la tham so
    console.log(message)
    console.log(message2)
}

writelog("xin chao",'test2') // xin chao la doi so // neu k tao doi so thi doi so se la kieu undefined


//Arguments
// la 1 danh sach bien khi ma no k dc dinh nghia trong ham
// de lay du lieu thi su dung vong for of

function write(){
    var mystring =''
    for(var i of arguments){
        mystring += `${i} - `
    }
    console.log(mystring)
}

write('a','2','1')


/** retrun trong function
 * 
 */


function sum(a,b){
    return a+b; 
}

/**
 * cac loai function
 * Declaration function
 * Expression function
 * Arrow function
 */

//Declaration function
function a(){}
//Expression function
var b = function c(){}  // co the k can ten
