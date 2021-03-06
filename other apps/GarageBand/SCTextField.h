//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@interface SCTextField : UITextField
{
    _Bool needsSeparatorLine;
    int cornerStyle;
}

@property(nonatomic) int cornerStyle; // @synthesize cornerStyle;
@property(nonatomic) _Bool needsSeparatorLine; // @synthesize needsSeparatorLine;
- (void)addInnerShadow;
- (void)roundedCorners:(unsigned long long)arg1 withRadii:(struct CGSize)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;

@end

