


//if


function run(a) {
    if(a%15===0){
        return 3
    }else if(a%5===0){
        return 2
    }
    else if(a%3===0) return 1

}



//switch

var date =2
switch(date){
    case 2: 
        console.log('so2')
        break;
    case 3: 
        console.log('so3')
        break;
    default:
        console.log('cuoi cung')   // khi ben tren dung, default van chay
}


//toan tu 3 ngoi

var a =3;

var kq = a>3 ? 'lon hon' :'be hon'