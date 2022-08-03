package org.dmgram.helpers;

import android.graphics.Color;
import android.graphics.Typeface;
import android.text.Spannable;
import android.text.Spanned;
import android.text.style.BackgroundColorSpan;
import android.text.style.ForegroundColorSpan;
import android.text.style.RelativeSizeSpan;
import android.text.style.ScaleXSpan;
import android.text.style.StrikethroughSpan;
import android.text.style.StyleSpan;
import android.text.style.SubscriptSpan;
import android.text.style.SuperscriptSpan;
import android.text.style.UnderlineSpan;

import org.telegram.tgnet.TLRPC;
import org.telegram.ui.Components.TextStyleSpan;

import java.util.HashMap;

public class FormattingHelper {

    private static final HashMap<String, Style> styles = new HashMap<>();

    static {
        styles.put("c", new ColorStyle());
        styles.put("s", new SizeStyle());
        styles.put("x", new ScaleXStyle());
        styles.put("b", new BackgroundColorStyle());
        styles.put("sub", new SubscriptStyle());
        styles.put("sup", new SuperscriptStyle());
        styles.put("underline", new UnderlineStyle());
        styles.put("strike", new StrikethroughStyle());
        styles.put("I", new ItalicStyle());
        styles.put("B", new BoldStyle());
        styles.put("BI", new BoldItalicStyle());
    }

    public static boolean validate(TLRPC.MessageEntity entity) {
        return entity != null && entity.language != null && entity.language.contains(";");
    }

    public static void apply(Spannable spannable, TextStyleSpan.TextStyleRun run) {
        for (String parts : run.urlEntity.language.split(";")) {
            String[] values = parts.split("=", 2);
            Style style = styles.get(values[0]);
            if (style != null) {
                try {
                    style.apply(values, spannable, run);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }

    static class ColorStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            if (args.length == 1)
                return;

            spannable.setSpan(new ForegroundColorSpan(Color.parseColor("#" + args[1])), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class BackgroundColorStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            if (args.length == 1)
                return;

            spannable.setSpan(new BackgroundColorSpan(Color.parseColor("#" + args[1])), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class SizeStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            if (args.length == 1)
                return;

            float value = Float.parseFloat(args[1]);

            if (value > 2.5 || value < 0.1) {
                return;
            }

            spannable.setSpan(new RelativeSizeSpan(value), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class ScaleXStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            if (args.length == 1)
                return;

            float value = Float.parseFloat(args[1]);

            if (value > 2 || value < 0) {
                return;
            }

            spannable.setSpan(new ScaleXSpan(value), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class SuperscriptStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new SuperscriptSpan(), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class SubscriptStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new SubscriptSpan(), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class ItalicStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new StyleSpan(Typeface.ITALIC), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class BoldStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new StyleSpan(Typeface.BOLD), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class BoldItalicStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new StyleSpan(Typeface.BOLD_ITALIC), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class UnderlineStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new UnderlineSpan(), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    static class StrikethroughStyle implements Style {
        @Override
        public void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run) {
            spannable.setSpan(new StrikethroughSpan(), run.start, run.end, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
        }
    }

    interface Style {
        void apply(String[] args, Spannable spannable, TextStyleSpan.TextStyleRun run);
    }
}
