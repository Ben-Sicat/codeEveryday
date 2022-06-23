let win = ''
let world1 = [
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2],
    [2,0,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,2,1,1,1,1,2],
    [2,1,1,1,1,1,1,2,2,2,2,2,2,1,1,1,1,1,2,1,2,2,2,1,2],
    [2,1,2,2,2,1,1,1,1,1,1,2,3,1,1,1,1,1,2,1,1,1,2,1,2],
    [2,1,1,1,1,2,1,2,1,2,2,2,2,2,2,1,1,1,1,1,1,2,2,1,2],
    [2,1,3,1,1,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2],
    [2,1,2,2,1,2,1,2,2,1,1,1,1,1,2,2,1,1,2,1,1,2,2,1,2],
    [2,1,2,1,1,2,1,2,2,2,2,2,1,1,2,1,2,1,2,3,1,1,2,1,2],
    [2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,2,3,1,1,1,1,2],
    [2,1,2,2,2,1,1,2,2,2,2,2,1,1,2,1,1,1,2,3,1,1,2,1,2],
    [2,1,1,1,1,1,1,1,1,1,1,2,3,1,2,1,1,1,2,3,1,1,1,1,2],
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
];
let world2 = [
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2],
    [2,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,2],
    [2,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,3,2,2],
    [2,1,2,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,2],
    [2,1,1,1,2,2,3,1,1,2,3,1,1,1,1,1,1,3,2,1,1,1,1,1,1,2,1,2,1,2],
    [2,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,2,1,2],
    [2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,2,3,1,2,1,2],
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
];

let world3 = [
    [2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2],
    [2,0,1,1,1,1,1,1,1,1,1,1,2,0,0,2,1,1,1,1,1,1,1,1,1,1,2,1,1,2],
    [2,1,1,2,1,1,2,2,2,2,1,1,2,2,2,2,1,1,2,2,2,1,1,2,1,2,2,1,1,2],
    [2,1,2,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,2,0,2,1,1,1,1,1,1,1,2,2],
    [2,1,1,1,3,1,2,2,2,2,2,2,2,2,2,1,1,1,2,2,2,2,2,2,1,1,1,1,2,2],
    [2,2,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,2,1,1,1,1,1,2,2,2,1,1,2],
    [0,0,2,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,3,1,1,1,1,1,2,3,1,1,1,2],
    [0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
];
let world4 = [
    [2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,2,2,0,0,0],
    [2,0,1,1,1,1,1,1,1,1,1,1,2,2,2,2,1,2,2,2,0,],
    [2,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,2],
    [2,1,1,2,2,1,1,1,1,2,1,1,1,1,1,1,1,1,1,2],
    [2,1,1,1,3,1,2,1,1,1,3,2,2,2,1,1,1,1,1,2],
    [2,2,1,1,1,1,1,1,1,2,2,0,0,2,2,2,2,1,2,2],
    [0,0,2,1,1,1,1,1,1,2,0,0,0,2,1,1,1,1,3,2],
    [0,0,2,2,2,2,2,2,2,0,0,0,0,0,2,2,2,2,2,2]
];

let world5 = [
    [2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2],
    [2,0,1,1,1,1,1,2,2,1,1,2,0,2,1,1,1,1,1,2,1,1,1,1,2],
    [2,1,1,1,1,1,2,2,1,1,1,2,0,2,1,1,1,1,2,2,1,1,1,1,2],
    [2,1,1,1,1,2,2,1,1,1,1,2,0,2,3,1,1,1,2,1,1,1,1,1,2],
    [2,1,1,1,2,2,3,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,1,2],
    [2,1,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2],
    [2,1,2,2,1,2,1,1,1,1,1,1,1,1,2,1,1,1,2,2,1,1,1,1,2],
    [2,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,2,3,1,1,1,1,2],
    [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
];
let test = [
    
      [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2],
      [2,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,2],
      [2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2],
      [2,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,2],
      [2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2],
      [2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2],
      [2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2]
      
]

let score = 0;

let pacman = {
    x: 1,
    y: 1,
    alive: true
}

let enemies = {
    x1:4,
    y1:6,
    x2:14,
    y2:3,
    x3:17,
    y3:6
}
// let maps = [world1,world2,world3,world4,world5]
// var map = Math.floor(Math.random() *5);

let world = test,iteration = 0;
let includesOne
var counter = 0
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
                
                if(iteration < 1){
                    counter++
                    console.log("coin")
                //console.log(counter)
                }
                
                
            }
            else if (world[i][j] == 3){
                output +="<div class = 'cherry'></div>"
            }
            else if (world[i][j] == 0){
                output += "<div class = 'empty'></div>"
            }

            
        }
        
        output += "\n</div>" 
    }
    iteration++
    document.getElementById('world').innerHTML = output
    console.log("counter1: "+ counter)
}

displayWorld()
displayPacman()
displayGhosts()

function displayPacman(){
    document.getElementById('pacman').style.top = pacman.y*50+"px";
    document.getElementById('pacman').style.left = pacman.x*50+'px';

}
console.log("counter1: "+ counter)

function displayGhosts(){
    
        document.getElementById('ghost1').style.top = enemies.y1*50+"px";
        document.getElementById('ghost1').style.left = enemies.x1*50+'px';

        document.getElementById('ghost2').style.top = enemies.y2*50+"px";
        document.getElementById('ghost2').style.left = enemies.x2*50+'px';

        document.getElementById('ghost3').style.top = enemies.y3*50+"px";
        document.getElementById('ghost3').style.left = enemies.x3*50+'px';
    
}


function displayScore(){
    document.getElementById('score').innerHTML ="Score:"+ score
}

 document.onkeydown = function movement(e){
    console.log(pacman.alive)
    if(pacman.alive){
        if(e.keyCode == 37 && world[pacman.y][pacman.x-1] != 2){
            pacman.x--
        }
        else if (e.keyCode == 39 && world[pacman.y][pacman.x+1] != 2){
            pacman.x++
        }
        else if(e.keyCode == 38 && world[pacman.y-1][pacman.x] != 2){
            pacman.y--
        }
        else if (e.keyCode == 40 && world[pacman.y+1][pacman.x] != 2){
            pacman.y++
        }

        if(world[pacman.y][pacman.x]==1){
            world[pacman.y][pacman.x] = 0
            score+=10
            counter--
            displayWorld()
        }
        if(world[pacman.y][pacman.x] == 3){
            world[pacman.y][pacman.x] = 0
            score+=20
            displayWorld()
        }
        displayPacman()
        displayWorld()
        displayScore()
        GameOver()
        winner()
        
        
        console.log(e.keyCode)
    }
}
console.log(counter)
function GameOver(){
    if(enemies.y1 == pacman.y && enemies.x1 == pacman.x){
        status()
        pacman.alive = false 
        win = 'false'
        
        
    }
    if(enemies.y2 == pacman.y && enemies.x2 == pacman.x){
        
        status()
        pacman.alive = false
        win = 'false'
        
    
    }
    if(enemies.y3 == pacman.y && enemies.x3 == pacman.x){
        
        status()
        pacman.alive = false
        win = 'false'
    }
    
}
function winner(){
    if (counter == 0){
        win = 'true'
        status()
        clearInterval(ghost1)
        clearInterval(ghost2)
        clearInterval(ghost3)
    }

}

function status(){
    console.log(win)
    
     if (win == 'true'){
        document.getElementById('status').innerHTML = 'YOU WIN';
        document.getElementById('status').style.border = '1rem solid white';
    }else{
        document.getElementById('status').innerHTML = 'GAMEOVER';
        document.getElementById('status').style.border = '1rem solid white';
    }
    
}
   
        
        const ghost1 = setInterval(function ghostMove(){
                let value = 1,counter = 0,lastVal = 1;
                value = Math.floor(Math.random()*4)+1
                // console.log(value)
                
                if(lastVal == value){
                    counter++
                }
                
            
            lastVal = value
                if(counter > 2){
                    ghost1Move()
                    counter = 0
                }

                if(value == 1 && world[enemies.y1][enemies.x1-1]!=2){
                    enemies.x1--
                     
                }
                if(value == 2 && world[enemies.y1][enemies.x1+1]!=2){
                    enemies.x1++
                     
                } 
                if(value == 3 && world[enemies.y1-1][enemies.x1]!=2){
                    enemies.y1--
                   
                } 
                if(value == 4 && world[enemies.y1+1][enemies.x1]!=2){
                    enemies.y1++
                    
                }   
                displayGhosts()
                GameOver()
            }, 250)

            const ghost2 = setInterval(function ghostMove(){
                let value = 1,counter = 0,lastVal = 1;
                value = Math.floor(Math.random()*4)+1
                // console.log(value)
               
                if(lastVal == value){
                    counter++
                }
                
            
            lastVal = value
                if(counter > 2){
                    ghost1Move()
                    counter = 0
                }

                if(value == 1 && world[enemies.y2][enemies.x2-1]!=2){
                    enemies.x2--
                }
                if(value == 2 && world[enemies.y2][enemies.x2+1]!=2){
                    enemies.x2++
                } 
                if(value == 3 && world[enemies.y2-1][enemies.x2]!=2){
                    enemies.y2--
                } 
                if(value == 4 && world[enemies.y2+1][enemies.x2]!=2){
                    enemies.y2++
                }   
                displayGhosts()
                GameOver()
            }, 250)
            
            const ghost3 = setInterval(function ghostMove(){
                    
                    let value = 1,counter = 0,lastVal = 1;
                value = Math.floor(Math.random()*4)+1
                // console.log(value)
               
                if(lastVal == value){
                    counter++
                }
                
            
            lastVal = value
                if(counter > 2){
                    ghost1Move()
                    counter = 0
                }

                if(value == 1 && world[enemies.y3][enemies.x3-1]!=2){
                    enemies.x3--
                }
                if(value == 2 && world[enemies.y3][enemies.x3+1]!=2){
                    enemies.x3++
                } 
                if(value == 3 && world[enemies.y3-1][enemies.x3]!=2){
                    enemies.y3--
                } 
                if(value == 4 && world[enemies.y3+1][enemies.x3]!=2){
                    enemies.y3++
                }   
                displayGhosts()
                GameOver()
                }, 250)
            

    // for movements up: 1, down : 2, right: 3, left: 4
    // we need to randomly get those values and return the opposite when there's a wall


    

  
