/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/NUIContainerBoxViewDelegate.h>

@class TLKMultilineText, UILabel, UIView, NSString;

@interface TLKSectionHeaderView : TLKView <NUIContainerBoxViewDelegate> {

	TLKMultilineText* _headerText;
	UILabel* _headerTextLabel;
	UIView* _backgroundView;

}

@property (retain) UILabel * headerTextLabel;                       //@synthesize headerTextLabel=_headerTextLabel - In the implementation block
@property (retain) UIView * backgroundView;                         //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) TLKMultilineText * headerText;                   //@synthesize headerText=_headerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(TLKMultilineText *)headerText;
-(void)setHeaderText:(TLKMultilineText *)arg1 ;
-(void)styleDidChange:(unsigned long long)arg1 ;
-(void)observedPropertiesChanged;
-(id)observableProperties;
-(id)headerLabelText;
-(long long)containerBoxView:(id)arg1 horizontalAlignmentForArrangedSubview:(id)arg2 ;
-(long long)containerBoxView:(id)arg1 verticalAlignmentForArrangedSubview:(id)arg2 ;
-(void)setHeaderTextLabel:(UILabel *)arg1 ;
-(UILabel *)headerTextLabel;
@end

