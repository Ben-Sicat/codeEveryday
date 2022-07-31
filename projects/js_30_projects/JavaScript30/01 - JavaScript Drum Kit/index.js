// window.addEventListener('keydown',function(e){


//     console.log(e.keyCode)
//     const audio = document.querySelector(`audio[data-key="${e.keyCode}"]`)
//     const key = document.querySelector(`.key[data-key="${e.keyCode}"]`)
//     console.log(audio)

//     if(!audio) return;
//     audio.currentTime = 0;
//     audio.play();

//     key.classList.add('playing')
//     // next step is to target classnames to change the stylying on keydown

//    console.log(key.classList)

//     //gotta create a function to remove the transition

// });
// function removeTransition(e){
//     if(e.propertyName !== 'transform') return;
//     this.classList.remove('playing')
// }


// const keys = document.querySelectorAll('.key')
// keys.forEach(key => key.addEventListener('transitionend',removeTransition));
window.addEventListener('keydown',function(e){
    const audio = document.querySelector(`audio[data-key="${e.keyCode}"]`);
    const key = document.querySelector(`.key[data-key="${e.keyCode}"]`)

    if (!audio) return;

    audio.currentTime= 0;
    audio.play();

    key.classList.add('playing')
    
})

function removeTransition(e){
    if(e.propertyName !== 'transform')return;
    this.classList.remove('playing')
}

const keys = document.querySelectorAll('.key');
keys.forEach(key => key.addEventListener('transitionend', removeTransition))
