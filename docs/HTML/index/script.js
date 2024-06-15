// CNT - Copyrights (C) TaimWay
class program{
    constructor(){
        this.link = {
            github: {
                home: 'https://github.com/TaimWay/CNT',
                File: {
                    ReadmeFile: 'https://github.com/TaimWay/CNT/blob/main/Readme.md',
                    config: 'https://raw.githubusercontent.com/TaimWay/CNT/main/config-server.js'
                }
            }
        };
        this.pageNumber = 4;
        this.pageStatus = 0;
        
    }
    error(errorModule, errorCode, errorMess){
        if(errorMess == null || errorMess == undefined) errorMess = "An unknown or undeclared error message";
        if(errorCode == null || errorCode == undefined) errorCode = "???";
        var errorStr = `[Error][${errorModule}]:(ErrorCode:${errorCode})${errorMess}`;
        console.log(errorStr);
    }
    goLink(path){
        var link = document.createElement('a');
        link.href = path;
        window.location.href = link.href; 
    }
    jump(value){
        if(value < this.pageNumber && value >= 0){
            var __document__ = document.getElementById('main');
            __document__.style = `transform: translateY(-${value*100}vh);`
            for(var i = 0;i < this.pageNumber;i ++){
                __document__ = document.getElementById(`page${i+1}`);
                if(i == value) __document__.style = `height: 20px;background: rgb(115, 115, 115);`
                else if(__document__ != null) __document__.style = "";
            }
            this.pageStatus = value;
        }
        else{
            this.error("JumpFunction","404","You Point to a page that doesn't exist");
        }
    }
    pageJump(status){
        if(status == 'up') this.jump(this.pageStatus - 1);
        else if(status == 'down') this.jump(this.pageStatus + 1);
    }
}

program = new program();
program.jump(1);

window.addEventListener('wheel', function(event) {
    const deltaY = event.deltaY;
    const direction = deltaY > 0 ? 'down' : 'up';
    program.pageJump(direction);
    //console.log(`Scrolling ${direction}: ${Math.abs(deltaY)} pixels`);

});