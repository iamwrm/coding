

function runTetris

    boardHeight = 24;
    boardWidth = 10;
    boardSize = [boardHeight, boardWidth];
    tetrominoWidth = 0.04; % Unit: normalized
    
    board = zeros(boardSize);
    % Initialize the board GUI and store the figure object
    % Board size information will be stored in boardObj
    boardObj = initializeBoard(board, tetrominoWidth);
    
    % Initialize a tetromino at the top-left corner
    initX = [1, 1, 2, 2];
    initY = [1, 2, 2, 3];
    tetrominoPosition = sub2ind(boardSize, initX, initY);
    updateBoard(boardObj, tetrominoPosition);
    
    while ~isTetrominoAtBottom(tetrominoPosition)
        tetrominoPosition = tetrominoFall(tetrominoPosition);
        updateBoard(boardObj, tetrominoPosition);
    end
end