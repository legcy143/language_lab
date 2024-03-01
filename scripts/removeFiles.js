const fs = require("fs")
const os = require("os")

const username = os.userInfo().username;
const folderPath = `C:/Users/${username}/.vscode/language_lab/`
const cacheFile = `C:/Users/${username}/.vscode/language_lab/scripts/cachefile.txt`;
let DeletedFileList = ["\n***** >> list of deleted files << *****\n\n"];

async function checkAllFile(path) {
    fs.readdir(path, (err, files) => {
        if (err) {
            return -1;
        }
        files.forEach((e) => {
            if (e !== "javascript") {
                checkAllFile(path + "/" + e)
                if (e.endsWith(".exe") || e.endsWith(".class")) {
                    // console.log(path + "/" + e)
                    DeletedFileList.push(e)
                    fs.unlink(path + "/" + e, error => {
                        // console.log("if error ", error)
                    })
                    fs.writeFile(cacheFile, DeletedFileList.join("\n>> "), err => {
                        // console.log("error in writing file : ", err)
                    })
                }

            }
        })
    })
}

(async ()=>{
    let a = await checkAllFile(folderPath)
    console.log(a)
    console.log("ending the program")
}
)()


