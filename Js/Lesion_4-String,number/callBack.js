// là hàm được truyền qua đối số
// khi gọi hàm khác
//goi lai trong hma nhan doi so

function myfunction(param){
    if(typeof param ==='function')
    param("xxxxxxxx")
}
function mycallback(value){
    console.log('value: ',value)
}
mycallback(mycallback);




//========================
var courses = ['js','py','java']

Array.prototype.map2() = function(callback){
    var output =[]
    for(var i =0;i<this.length;i++){
// tim hieu thuoc tinh this.hasOwnProperty() _index
       var result = callback(this[i],i)
        output.push(result)
    }
    return output;
}


courses.map2(function(courses){

})


//vd filter()


var languagess1 = [
    {
        coin: 100,
        name:'py',
    },
    {
        coin: 120,
        name:'java',
    },
    {
        coin:150,
        name:'js',
    }
];

Array.prototype.filter2 =function(cb){
    var output =[]
    for(var i in this){
        if(this.hasOwnProperty(i)){
            var result = cb(this[i],i,this)
            if(result) output.push(this[i])
        }
    }
    return output
} 
