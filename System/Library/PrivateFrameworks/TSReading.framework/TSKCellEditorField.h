/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIView.h>

@class UITextView, UILabel, NSString;

@interface TSKCellEditorField : UIView {

	UITextView* mTextView;
	UILabel* mLeftSymbolView;
	UILabel* mRightSymbolView;

}

@property (nonatomic,retain) UILabel * leftSymbolView; 
@property (nonatomic,retain) UILabel * rightSymbolView; 
@property (nonatomic,retain) UITextView * textView; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * leftSymbol; 
@property (nonatomic,retain) NSString * rightSymbol; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(id)p_symbolContainerBackgroundColor;
-(UILabel *)leftSymbolView;
-(UILabel *)rightSymbolView;
-(NSString *)leftSymbol;
-(void)setLeftSymbol:(NSString *)arg1 ;
-(NSString *)rightSymbol;
-(void)setRightSymbol:(NSString *)arg1 ;
-(void)setLeftSymbolView:(UILabel *)arg1 ;
-(void)setRightSymbolView:(UILabel *)arg1 ;
@end

