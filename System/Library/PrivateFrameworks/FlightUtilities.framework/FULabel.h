/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSString, NSAttributedString;

@interface FULabel : UILabel {

	NSString* _stringValue;
	NSAttributedString* _attributedStringValue;
	FULabel* _realAssociatedScalingLabel;
	BOOL _uppercase;
	BOOL _useCurrentLocale;
	/*^block*/id _onTap;
	FULabel* _associatedScalingLabel;

}

@property (copy) id onTap;                                                         //@synthesize onTap=_onTap - In the implementation block
@property (nonatomic,readonly) BOOL uppercase;                                     //@synthesize uppercase=_uppercase - In the implementation block
@property (readonly) BOOL useCurrentLocale;                                        //@synthesize useCurrentLocale=_useCurrentLocale - In the implementation block
@property (assign,nonatomic,__weak) FULabel * associatedScalingLabel;              //@synthesize associatedScalingLabel=_associatedScalingLabel - In the implementation block
-(void)setAttributedText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)awakeFromNib;
-(id)_associatedScalingLabel;
-(void)setAssociatedLabel:(id)arg1 ;
-(void)performTap:(id)arg1 ;
-(id)onTap;
-(FULabel *)associatedScalingLabel;
-(BOOL)useCurrentLocale;
-(void)setUppercase:(BOOL)arg1 usingCurrentLocale:(BOOL)arg2 ;
-(void)setStyleProvider:(id)arg1 primaryStyle:(BOOL)arg2 ;
-(void)setOnTap:(id)arg1 ;
-(void)setAssociatedScalingLabel:(FULabel *)arg1 ;
-(BOOL)uppercase;
@end

