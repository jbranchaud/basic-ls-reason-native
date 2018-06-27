let run = () => {
    let currentDir = Unix.opendir(Unix.getcwd());

    let break = ref(false);

    while (! break^) {
        switch (Unix.readdir(currentDir)) {
        | exception End_of_file => break := true
        | item => print_endline(item);
        }
    };

    Unix.closedir(currentDir);
};

run();