function bu_so(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}


arr1 = [3, 2, 1, 4, 2, 3, 6, 7, 8];

arr2 = bu_so(arr1);
console.log(arr2);
