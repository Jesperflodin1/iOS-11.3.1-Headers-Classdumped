//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, UIImage, UIImageView;

@interface MAUIColoredBackgroundButton : UIButton
{
    UIImageView *_glyphImgView;
    UIImage *_glyphImage;
    _Bool _setupRunning;
    NSMutableDictionary *_backgroundImageInfoDictionary;
}

@property(nonatomic) _Bool setupRunning; // @synthesize setupRunning=_setupRunning;
@property(retain, nonatomic) NSMutableDictionary *backgroundImageInfoDictionary; // @synthesize backgroundImageInfoDictionary=_backgroundImageInfoDictionary;
- (void).cxx_destruct;
- (id)internalGetValueForKey:(id)arg1 forState:(unsigned long long)arg2;
- (void)internalSetValue:(id)arg1 forKey:(id)arg2 forState:(unsigned long long)arg3;
- (void)updateBackgroundImageForState:(unsigned long long)arg1;
- (void)updateGlyphImage;
@property(retain) UIImage *glyphImage;
- (id)mauiEdgeRadiiForState:(unsigned long long)arg1;
- (void)setMAUIEdgeRadii:(id)arg1 forState:(unsigned long long)arg2;
- (id)mauiEdgeMaskForState:(unsigned long long)arg1;
- (void)setMAUIEdgeMask:(id)arg1 forState:(unsigned long long)arg2;
- (id)mauiBorderSizeForState:(unsigned long long)arg1;
- (void)setMAUIBorderSize:(id)arg1 forState:(unsigned long long)arg2;
- (id)mauiBorderColorForState:(unsigned long long)arg1;
- (void)setMAUIBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)mauiBackgroundColorForState:(unsigned long long)arg1;
- (void)setMAUIBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)endSetup;
- (void)beginSetup;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
