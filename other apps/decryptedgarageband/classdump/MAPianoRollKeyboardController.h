//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MAPianoRollKeyboard-Protocol.h"
#import "MAUIForwardTouchGestureRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UIFont, UIImage, UIView;
@protocol MAPianoRollKeyboardDelegate;

@interface MAPianoRollKeyboardController : UIViewController <UIGestureRecognizerDelegate, MAUIForwardTouchGestureRecognizerDelegate, MAPianoRollKeyboard>
{
    id <MAPianoRollKeyboardDelegate> _keyboardDelegate;
    long long mLastChordKeyIndex;
    struct _NSRange mNotesRange;
    double mAverageIconWidth;
    UIImage *keyImageNormal;
    UIImage *keyImagePressed;
    UIImage *keyImagePressedSelected;
    UIImage *keyImageSelected;
    UIImage *keyImageGuitarChord;
    UIImage *keyImageGuitarChordSelected;
    UIImage *keyImageGuitarLastChord;
    UIImage *keyImageGuitarLastChordSelected;
    UIImage *keyImageEbony;
    UIImage *keyImageEbonyPressed;
    UIImage *keyImageEbonySelected;
    UIImage *keyImageEbonyPressedSelected;
    UIImage *keyImageIvory;
    UIImage *keyImageIvoryPressed;
    UIImage *keyImageIvorySelected;
    UIImage *keyImageIvoryPressedSelected;
    UIFont *keyLabelFont;
    UIFont *chordLabelFont;
    UIColor *keyLabelColor;
    UIColor *selectedKeyLabelColor;
    NSArray *keys;
    _Bool mIsInPianoMode;
    _Bool mIsScalable;
    _Bool mKeyLabelsHaveShadow;
    long long mKeyLabelMarginH;
    long long mKeyLabelMarginV;
    long long mKeyLabelAlignmentH;
    long long mKeyLabelAlignmentV;
    long long mKeyIconResizingStrategy;
    long long mKeyRightAlignedBaseLayoutWidth;
    double mInitialImageScale;
}

@property __weak id <MAPianoRollKeyboardDelegate> keyboardDelegate; // @synthesize keyboardDelegate=_keyboardDelegate;
@property long long lastChordKeyIndex; // @synthesize lastChordKeyIndex=mLastChordKeyIndex;
@property(retain, nonatomic) UIColor *selectedKeyLabelColor; // @synthesize selectedKeyLabelColor;
@property(retain, nonatomic) UIColor *keyLabelColor; // @synthesize keyLabelColor;
@property(retain, nonatomic) UIFont *chordLabelFont; // @synthesize chordLabelFont;
@property(retain, nonatomic) UIFont *keyLabelFont; // @synthesize keyLabelFont;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys;
- (void).cxx_destruct;
- (id)keyForLocation:(struct CGPoint)arg1;
- (void)updateKeyPressesForEvent:(id)arg1;
- (id)pressedKeysForEvent:(id)arg1;
- (id)currentPressedKeys;
- (long long)typeForKey:(unsigned long long)arg1;
- (void)layOutKeys;
- (void)layOutPianoKeysForWidth:(double)arg1;
- (void)layOutBlackPianoKeysForWidth:(double)arg1;
- (void)layOutWhitePianoKeysForWidth:(double)arg1;
- (struct CGRect)layOutWhitePianoKeyWithIndex:(unsigned long long)arg1;
- (double)maxVerticalPositionOfWhitePianoKeyWithIndex:(unsigned long long)arg1;
- (unsigned long long)previousWhiteKeyIndexForKeyIndex:(unsigned long long)arg1;
- (void)createKeys;
- (void)updateKeyViews;
- (void)addKeyViewsToView;
- (void)updateLayerImagesForKey:(id)arg1;
- (void)setAssetSet:(id)arg1;
- (void)resizeKeyboard;
- (void)buildKeyboard;
- (void)setHighlightState:(long long)arg1 forNote:(unsigned long long)arg2;
- (void)setKeyState:(long long)arg1 forNote:(unsigned long long)arg2;
- (void)setVisibleNoteRange:(struct _NSRange)arg1;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)mauiTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)mauiTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)mauiTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)mauiTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, retain) UIView *view; // @dynamic view;

@end

