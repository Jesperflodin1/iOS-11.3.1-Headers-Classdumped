/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <libobjc.A.dylib/CKActionMenuItemView.h>

@class UIColor, NSString;

@interface CKActionMenuItemImageView : UIImageView <CKActionMenuItemView> {

	UIColor* _unhighlightedTintColor;
	UIColor* _highlightedTintColor;
	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateTintColor;
-(id)initWithImage:(id)arg1 tintColor:(id)arg2 highlightedTintColor:(id)arg3 ;
@end

