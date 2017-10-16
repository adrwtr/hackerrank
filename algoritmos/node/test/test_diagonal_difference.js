var assert = require('assert');

describe('test', function() {
    describe('#test()', function() {
        it('Diagonal Difference', function() {

            var array = new Array(
                new Array(11, 2, 4),
                new Array(4, 5, 6),
                new Array(10, 8, -12)
            );

            var size = 3;
            var sizeTemp = size;
            var sumA = 0;
            var sumB = 0;

            for (var i = 0; i < size; i++) {
                sizeTemp--;
                sumA += array[i][i];
                sumB += array[i][sizeTemp];
                console.log(sumA);
                console.log(sumB);
            }

            assert.equal(
                15,
                Math.abs(sumA - sumB)
            );
        });
    });
});