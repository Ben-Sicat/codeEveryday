window.addEventListener('keydown',function(e){
    console.log(e.keyCode)
    const audio = document.querySelector(`audio[data-key="${e.keyCode}"]`)
    console.log(audio)

    if(!audio) return;
    audio.play();

    // next step is to target classnames to change the stylying on keydown
    
});