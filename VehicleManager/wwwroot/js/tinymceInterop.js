window.tinymceInterop = {
    initializeEditor: function (dotNetHelper) {
        var editorElement = document.querySelector('textarea');
        if (editorElement && editorElement.offsetParent !== null) {
            tinymce.init({
                selector: 'textarea',
                license_key: 'gpl',
                setup: function (editor) {
                    editor.on('blur', function (e) {
                        dotNetHelper.invokeMethodAsync('OnEditorBlur');
                    });
                }
            });
        }
    },
    getCursorPosition: function () {
        if (tinymce.activeEditor) {
            var editor = tinymce.activeEditor;
            var content = editor.getContent({ format: 'text' });
            var selection = editor.selection.getRng();
            var startOffset = selection.startOffset;
            return startOffset;
        }
        return -1;
    },
    insertTextAtCursor: function (text) {
        if (tinymce.activeEditor && tinymce.activeEditor.hasFocus()) {
            tinymce.activeEditor.execCommand('mceInsertContent', false, text);
        }
    },
    focusEditor: function () {
        if (tinymce.activeEditor) {
            tinymce.activeEditor.focus();
        }
    },
    replaceEditorContent: function (text) {
        if (tinymce.activeEditor) {
            tinymce.activeEditor.setContent(text);
        }
    }
};