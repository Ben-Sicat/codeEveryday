let world1 = [
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2],
    [2,0,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,2],
    [2,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,2,2,2,1,2],
    [2,1,2,2,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,2,1,2],
    [2,1,1,1,1,2,1,1,2,2,2,2,2,2,2,1,1,1,1,1,1,2,2,1,2],
    [2,1,3,1,1,2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2],
    [2,1,2,2,2,2,1,1,2,1,1,1,1,1,2,2,1,1,2,1,1,2,2,1,2],
    [2,1,2,1,1,2,1,1,2,2,2,2,1,1,2,1,2,1,2,3,1,1,2,1,2],
    [2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,2,3,1,1,1,1,2],
    [2,1,2,2,2,1,1,2,2,2,2,2,1,1,2,1,1,1,2,3,1,1,2,1,2],
    [2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,2,3,1,1,1,1,2],
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
];

let score = 0
let pacman ={
    x:1,
    y:1
}
let maps = [world1]
// var map = Math.floor(Math.random() *5);
let map = 0
let world = maps[map]
function displayWorld(){

    let output = '';
    for(let i = 0; i <world.length;i++){
        output = output + "\n<div class='row'>\n";
        for(let j = 0; j < world[i].length;j++){
            if (world[i][j] == 2){
                output += "<div class = 'brick'></div>"
            }
            else if (world[i][j] == 1){
                output += "<div class = 'coin'></div>"
            }
            if (world[i][j] == 3){
                output +="<div class = 'cherry'></div>"
            }
             if (world[i][j] == 0){
                output += "<div class = 'empty'></div>"
            }
            
        }
        output += "\n</div>" 
    }
    document.getElementById('world').innerHTML = output
}