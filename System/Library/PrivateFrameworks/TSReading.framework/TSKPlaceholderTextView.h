/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel, NSString;

@interface TSKPlaceholderTextView : UITextView {

	UILabel* mPlaceholderView;

}

@property (nonatomic,retain) NSString * placeholder; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)dealloc;
-(BOOL)becomeFirstResponder;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)p_textDidChange:(id)arg1 ;
@end

