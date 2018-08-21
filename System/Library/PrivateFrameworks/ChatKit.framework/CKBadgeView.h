/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CKBadgeView : UIView {

	unsigned long long _value;
	UILabel* _countLabel;

}

@property (nonatomic,readonly) UILabel * countLabel;                //@synthesize countLabel=_countLabel - In the implementation block
@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(unsigned long long)value;
-(UILabel *)countLabel;
@end

