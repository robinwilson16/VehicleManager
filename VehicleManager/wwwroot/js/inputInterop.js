window.inputInterop = {
    insertTextAtCursor: function (elementId, text) {
        var input = document.getElementById(elementId);
        if (input) {
            var start = input.selectionStart;
            var end = input.selectionEnd;
            var value = input.value;
            input.value = value.substring(0, start) + text + value.substring(end);
            input.selectionStart = input.selectionEnd = start + text.length;
            input.focus();
        }
    }
};