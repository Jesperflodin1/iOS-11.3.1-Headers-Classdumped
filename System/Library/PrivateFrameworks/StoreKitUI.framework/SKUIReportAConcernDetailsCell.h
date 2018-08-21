/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UITextView;

@interface SKUIReportAConcernDetailsCell : UITableViewCell <UITextViewDelegate> {

	NSString* _placeholderText;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                 //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setTextView:(UITextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(UITextView *)textView;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)updatePlaceholderText:(BOOL)arg1 ;
@end

