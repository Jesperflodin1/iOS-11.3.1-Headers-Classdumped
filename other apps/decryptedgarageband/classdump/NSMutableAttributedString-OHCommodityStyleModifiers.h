//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (OHCommodityStyleModifiers)
- (void)setLink:(id)arg1 range:(struct _NSRange)arg2;
- (void)setParagraphStyle:(id)arg1 range:(struct _NSRange)arg2;
- (void)setParagraphStyle:(id)arg1;
- (void)modifyParagraphStylesInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)modifyParagraphStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)setTextAlignment:(unsigned char)arg1 lineBreakMode:(unsigned char)arg2 range:(struct _NSRange)arg3;
- (void)setTextAlignment:(unsigned char)arg1 lineBreakMode:(unsigned char)arg2;
- (void)setTextItalics:(_Bool)arg1 range:(struct _NSRange)arg2;
- (void)setTextBold:(_Bool)arg1 range:(struct _NSRange)arg2;
- (void)changeFontWithTraits:(unsigned int)arg1 mask:(unsigned int)arg2 range:(struct _NSRange)arg3 newFontFinder:(CDUnknownBlockType)arg4;
- (void)setTextUnderlineStyle:(int)arg1 range:(struct _NSRange)arg2;
- (void)setTextIsUnderlined:(_Bool)arg1 range:(struct _NSRange)arg2;
- (void)setTextIsUnderlined:(_Bool)arg1;
- (void)setTextColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTextColor:(id)arg1;
- (void)setFontFamily:(id)arg1 size:(double)arg2 bold:(_Bool)arg3 italic:(_Bool)arg4 range:(struct _NSRange)arg5;
- (void)setFontName:(id)arg1 size:(double)arg2 range:(struct _NSRange)arg3;
- (void)setFontName:(id)arg1 size:(double)arg2;
- (void)setFont:(id)arg1 range:(struct _NSRange)arg2;
- (void)setFont:(id)arg1;
@end

