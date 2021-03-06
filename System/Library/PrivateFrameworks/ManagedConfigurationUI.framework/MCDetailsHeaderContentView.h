/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MCUIGradientLabel, UIImageView, MCActionButton;

@interface MCDetailsHeaderContentView : UIView {

	UILabel* _displayNameLabel;
	UILabel* _organizationNameLabel;
	MCUIGradientLabel* _trustedLabel;
	UIImageView* _checkmarkView;
	MCActionButton* _actionButton;
	int _headerMode;
	BOOL _isNewPayload;
	BOOL _isTrusted;
	BOOL _isSigned;
	BOOL _isExpired;
	BOOL _hidesUntrustedLabel;
	BOOL _useTrustedNomenclature;
	id _headerDelegate;

}
+(void)_releaseGradients;
+(id)_greenGradient;
+(id)_redGradient;
+(id)_grayGradient;
-(void)setDisplayName:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)_scriptingInfo;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)setOrganizationName:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)setGradientColor:(int)arg1 ;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setIsTrusted:(BOOL)arg1 ;
-(void)setHidesUntrustedLabel:(BOOL)arg1 ;
-(void)setUseTrustedNomenclature:(BOOL)arg1 ;
-(void)hideActionButton;
-(void)setIsExpired:(BOOL)arg1 ;
-(void)showActionButton;
-(void)setActionToRemove;
-(id)_displayNameLabel;
-(id)_organizationNameLabel;
-(id)_trustedLabel;
-(id)_stringForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(BOOL)_canFitTrustedStringForWidth:(double)arg1 ;
-(id)_gradientForSigned:(BOOL)arg1 andTrusted:(BOOL)arg2 ;
-(void)setActionToInstall;
@end

