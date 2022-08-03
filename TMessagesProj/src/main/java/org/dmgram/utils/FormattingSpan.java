package org.dmgram.utils;

import android.graphics.Paint;
import android.graphics.Typeface;
import android.text.TextPaint;
import android.text.style.MetricAffectingSpan;

import androidx.annotation.NonNull;

import org.telegram.messenger.AndroidUtilities;
import org.telegram.messenger.SharedConfig;
import org.telegram.ui.ActionBar.Theme;

public class FormattingSpan extends MetricAffectingSpan {

    private final String string;

    public FormattingSpan(String string) {
        this.string = string;
    }

    public String getString() {
        return string;
    }

    @Override
    public void updateMeasureState(@NonNull TextPaint textPaint) {
        textPaint.setTextSize(AndroidUtilities.dp(SharedConfig.fontSize - 1));
        textPaint.setFlags(textPaint.getFlags() | Paint.SUBPIXEL_TEXT_FLAG);
        textPaint.setTypeface(Typeface.MONOSPACE);
    }

    @Override
    public void updateDrawState(TextPaint textPaint) {
        textPaint.setColor(Theme.getColor(Theme.key_chat_messageTextIn));
        textPaint.setTypeface(Typeface.MONOSPACE);
        textPaint.setUnderlineText(true);
    }
}
