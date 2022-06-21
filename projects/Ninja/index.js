var leftValue = 450, topValue = 100, direction = 'down', walkVal = 1, bg = 'black', counter = 1;
function update(){

document.getElementById("character").style.left = leftValue+"px";
document.getElementById("character").style.top = topValue+"px";
document.getElementById("character").style.backgroundImage = "url('assets/"+direction+walkVal+".png')";
document.getElementById("background").style.backgroundImage = "url('assets/"+bg+"_bg.jpg')";
}
document.onkeydown = function(e) {
    console.log('e: ', e); 
    if (e.keyCode == 37 & leftValue > 0 ) { // LEFT
        leftValue = leftValue - 10;
        direction = 'left';
        counter++
    }
    else if (e.keyCode == 39 & leftValue < 1000) { // RIGHT
        leftValue = leftValue + 10;     
        direction = 'right';  
        counter++  
    }
    else if (e.keyCode == 40 & topValue < 1000) { // DOWN
        topValue = topValue + 10;
        direction = 'down';
        counter++
    }
    else if (e.keyCode == 38 & topValue > 0) { // UP
        topValue = topValue - 10;
        direction = 'top';
        counter++
    }
    if(walkVal % 2 == 0){
        walkVal = 1;
        bg = 'black'
    }
    else{
        walkVal = 2;
        bg = 'white'
    }

    /*

    
    I created a counter that increments every time the user presses a key.
    and then i used a modulus operator to determine if the counter is divisible by 2 then it will change the walkVal to 1 or 2.
    if the counter is odd or even 


    */
    update();
}