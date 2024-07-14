// CNT for JavaScript
//Copyright (C) 2025

const copyrightOut = true;
const copyrightOutText = `
APlcexenicesetrl 
Copyrights (C) 2024

 ██████╗ ███╗   ██╗████████╗
██╔════╝ ████╗  ██║╚══██╔══╝
██║      ██╔██╗ ██║   ██║   
██║      ██║╚██╗██║   ██║   
╚██████╗ ██║ ╚████║   ██║   
 ╚═════╝ ╚═╝  ╚═══╝   ╚═╝   in JavaScript
`;

class getInformation{
    constructor(){
        this.chromeInformation = {
            userLanguage: navigator.userLanguage,  
            userAgent: navigator.userAgent,
            systemLanguage: navigator.systemLanguage
        }
    }
}


class cnt{
    constructor(){
        if(copyrightOut) console.log(copyrightOutText);
        this.function = {
            console: console,
            Information: new getInformation()
        };
    }

}

cnt = new cnt();