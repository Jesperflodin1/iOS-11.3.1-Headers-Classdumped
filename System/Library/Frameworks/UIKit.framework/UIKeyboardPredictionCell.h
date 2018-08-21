/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIMorphingLabel, UILabel, UIView, UIKBKeyView, TIKeyboardCandidate;

@interface UIKeyboardPredictionCell : UIView {

	UIMorphingLabel* m_label;
	UILabel* m_suggestionLabel;
	UIView* m_maskView;
	UIKBKeyView* m_activeKeyView;
	UIKBKeyView* m_enabledKeyView;
	BOOL m_lightKeyboard;
	CGSize m_keyViewSize;
	double m_maskViewMargin;
	BOOL _isAutocorrection;
	BOOL _isTypedString;
	BOOL _isCenter;
	BOOL _isLongCandidate;
	BOOL _isEmoji;
	int _state;
	unsigned _slotID;
	TIKeyboardCandidate* _prediction;
	long long _candidateType;
	CGRect _collapsedFrame;
	CGRect _baseFrame;
	CGRect _activeFrame;

}

@property (nonatomic,retain,readonly) TIKeyboardCandidate * prediction;              //@synthesize prediction=_prediction - In the implementation block
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGRect collapsedFrame;                                  //@synthesize collapsedFrame=_collapsedFrame - In the implementation block
@property (assign,nonatomic) CGRect baseFrame;                                       //@synthesize baseFrame=_baseFrame - In the implementation block
@property (assign,nonatomic) CGRect activeFrame;                                     //@synthesize activeFrame=_activeFrame - In the implementation block
@property (assign,nonatomic) BOOL isAutocorrection;                                  //@synthesize isAutocorrection=_isAutocorrection - In the implementation block
@property (assign,nonatomic) BOOL isTypedString;                                     //@synthesize isTypedString=_isTypedString - In the implementation block
@property (assign,nonatomic) BOOL isCenter;                                          //@synthesize isCenter=_isCenter - In the implementation block
@property (assign,nonatomic) BOOL isLongCandidate;                                   //@synthesize isLongCandidate=_isLongCandidate - In the implementation block
@property (assign,nonatomic) unsigned slotID;                                        //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) long long candidateType;                                //@synthesize candidateType=_candidateType - In the implementation block
@property (assign,nonatomic) BOOL isEmoji;                                           //@synthesize isEmoji=_isEmoji - In the implementation block
+(id)newKeyViewWithSize:(CGSize)arg1 state:(int)arg2 needsBackground:(BOOL)arg3 ;
+(double)fontSizeForSingleLineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)state;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)textColor;
-(CGRect)visibleRect;
-(id)label;
-(CGRect)baseFrame;
-(void)setBaseFrame:(CGRect)arg1 ;
-(unsigned)slotID;
-(void)setVisibleRect;
-(void)setIsLongCandidate:(BOOL)arg1 ;
-(BOOL)isLongCandidate;
-(BOOL)isAutocorrection;
-(CGRect)activeFrame;
-(void)setKeyViewForState:(int)arg1 ;
-(CGRect)collapsedFrame;
-(void)clearKeyViewForState:(int)arg1 ;
-(void)setCellAttributes;
-(long long)candidateType;
-(void)setState:(int)arg1 withText:(id)arg2 ;
-(void)setState:(int)arg1 withAttrText:(id)arg2 ;
-(void)scrollLabelWithText:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)shouldDisplayHeaderForPrediction:(id)arg1 ;
-(void)setCandidateType:(long long)arg1 ;
-(BOOL)shouldDisplayAsSuggestion:(id)arg1 ;
-(void)setSlotID:(unsigned)arg1 ;
-(BOOL)isEmoji;
-(void)setIsEmoji:(BOOL)arg1 ;
-(void)touchMoved:(double)arg1 ;
-(void)setText:(id)arg1 prediction:(id)arg2 active:(BOOL)arg3 isEmoji:(BOOL)arg4 ;
-(void)updateBackgroundWithRenderConfig:(id)arg1 ;
-(TIKeyboardCandidate *)prediction;
-(void)setCollapsedFrame:(CGRect)arg1 ;
-(void)setActiveFrame:(CGRect)arg1 ;
-(void)setIsAutocorrection:(BOOL)arg1 ;
-(BOOL)isTypedString;
-(void)setIsTypedString:(BOOL)arg1 ;
-(BOOL)isCenter;
-(void)setIsCenter:(BOOL)arg1 ;
@end

