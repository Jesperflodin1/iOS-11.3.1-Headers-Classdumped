/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPassPersonalizationFooterViewDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationFooterView : UIView <UITextViewDelegate> {

	UITextView* _privacyTextView;
	id<PKPassPersonalizationFooterViewDelegate> _delegate;

}

@property (assign,nonatomic) id<PKPassPersonalizationFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id<PKPassPersonalizationFooterViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(id)initWithOrganizationName:(id)arg1 delegate:(id)arg2 ;
@end

