/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextViewInteractableItem.h>

@class NSTextAttachment;

@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem {

	NSTextAttachment* _attachment;

}

@property (nonatomic,retain) NSTextAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
+(id)interactableLinkWithAttachment:(id)arg1 range:(NSRange)arg2 ;
-(id)_image;
-(id)actions;
-(id)localizedTitle;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(NSTextAttachment *)attachment;
-(BOOL)allowInteraction:(long long)arg1 ;
-(id)defaultAction;
-(void)_copyImage;
-(void)_saveToCameraRoll;
@end

