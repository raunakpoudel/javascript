
const user =[
    {
        firstName:"jeevan",lastName:"poudel",age:23
    },
    {
        firstName:"aayush",lastName:"dhungel",age:20
    },
    {
        firstName:"sanjeev",lastName:"shrestha",age:21
    },{
        firstName:"yanjal",lastName:"khanal",age:20
    }
]

const output =user.reduce((acc,user) => {

    if (acc[user.age]){
        acc[user.age]+=1;
    }
    else{
        acc[user.age]=1
    }   
     return acc;
},{});

console.log(output);

