var leftValue = 450, topValue = 100;
            function update(){
                document.getElementById("character").style.left = leftValue+"px";
                document.getElementById("character").style.top = topValue+"px";
            }
            document.onkeydown = function(e) {
                console.log('e: ', e); 
                console.log('e.keyCode: ', e.keyCode);
                if (e.keyCode == 37 & leftValue > 0 ) { // LEFT
                    leftValue = leftValue - 10;
                }
                else if (e.keyCode == 39 & leftValue < 1000) { // RIGHT
                    leftValue = leftValue + 10;         
                }
                else if (e.keyCode == 40 & topValue < 1000) { // DOWN
                    topValue = topValue + 10;
                }
                else if (e.keyCode == 38 & topValue > 0) { // UP
                    topValue = topValue - 10;
                }

                // if(document.getElementById("character").style.left <= "0px"){
                //     leftValue = 0;
                // }
                // else if(document.getElementById("character").style.left >= "500px"){
                //     leftValue = 500;
                // }
                // else if(document.getElementById("character").style.top <= "0px"){
                //     topValue = 0;
                // }
                // else if(document.getElementById("character").style.top >= "500px"){
                //     topValue = 500;
                // }
                
                update();
            }