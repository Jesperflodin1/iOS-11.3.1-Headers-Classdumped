//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol RETrimBlindDelegate;

@interface RETrimBlind : UIView
{
    id <RETrimBlindDelegate> _delegate;
    UIImageView *_thumbControlView;
    int _type;
    UIView *_backgroundBlur;
    UIView *_lineView;
    _Bool _isOnScroll;
}

@property(nonatomic) _Bool isOnScroll; // @synthesize isOnScroll=_isOnScroll;
@property(retain, nonatomic) UIImageView *thumbControlView; // @synthesize thumbControlView=_thumbControlView;
@property(retain, nonatomic) UIView *backgroundBlur; // @synthesize backgroundBlur=_backgroundBlur;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)imageFromBundle:(id)arg1 named:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 recourceBundle:(id)arg2 type:(int)arg3;

@end

