// CNT - Copyrights (C) TaimWay

class program{
    constructor(){
        var link = {
            githubHome: 'https://github.com/TaimWay/CNT'
        };
        this.link = link;
    }
    goLink(path){
        var link = document.createElement('a');
        link.href = path;
        window.location.href = link.href; 
    }
}

program = new program();