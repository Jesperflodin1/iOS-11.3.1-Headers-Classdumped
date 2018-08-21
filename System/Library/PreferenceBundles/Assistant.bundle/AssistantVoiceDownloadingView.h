/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AssistantVoiceDownloadingView : UIView {

	UIActivityIndicatorView* _indicator;
	UILabel* _downloadLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (nonatomic,retain) UILabel * downloadLabel;                          //@synthesize downloadLabel=_downloadLabel - In the implementation block
-(UILabel *)downloadLabel;
-(void)setDownloadLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)indicator;
@end
