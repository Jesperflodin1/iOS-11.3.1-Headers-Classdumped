/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/HACCContentModule.h>

@protocol HACCContentModuleDelegate;
@class UIVisualEffectView, UILabel, HACCLiveListenLevelGroup, NSString;

@interface HACCLiveListenButton : UIControl <HACCContentModule> {

	UIVisualEffectView* _titleContainer;
	UIVisualEffectView* _subtitleContainer;
	BOOL _isListening;
	unsigned long long module;
	id<HACCContentModuleDelegate> delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	HACCLiveListenLevelGroup* _levelGroup;

}

@property (nonatomic,retain) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) HACCLiveListenLevelGroup * levelGroup;               //@synthesize levelGroup=_levelGroup - In the implementation block
@property (assign,nonatomic) BOOL isListening;                                    //@synthesize isListening=_isListening - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<HACCContentModuleDelegate> delegate; 
@property (assign,nonatomic) unsigned long long module; 
-(unsigned long long)module;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HACCContentModuleDelegate>)delegate;
-(void)setDelegate:(id<HACCContentModuleDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setIsListening:(BOOL)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)updateValue;
-(id)contentValue;
-(void)setModule:(unsigned long long)arg1 ;
-(void)liveListenAudioLevelDidChange:(double)arg1 ;
-(HACCLiveListenLevelGroup *)levelGroup;
-(void)setLevelGroup:(HACCLiveListenLevelGroup *)arg1 ;
-(BOOL)isListening;
@end

