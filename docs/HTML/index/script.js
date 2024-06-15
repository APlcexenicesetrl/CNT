// CNT - Copyrights (C) TaimWay
class program{
    constructor(){
        var link = {
            githubHome: 'https://github.com/TaimWay/CNT',
            githubReadmeFile: 'https://github.com/TaimWay/CNT/blob/main/Readme.md'
        };
        this.link = link;
        this.pageNumber = 4;
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
        }
        else{
            this.error("JumpFunction","404","You Point to a page that doesn't exist");
        }
    }
    
}

program = new program();
program.jump(1);