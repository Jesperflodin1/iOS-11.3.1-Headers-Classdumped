/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface _UIPreviewActionSheetTitleView : UIView {

	NSString* _title;
	UILabel* _label;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;              //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_updateLabelFont;
-(void)_contentSizeChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
@end

