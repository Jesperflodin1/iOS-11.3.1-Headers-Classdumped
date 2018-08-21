/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKit/UIActivityItemSourceAttachment.h>
#import <UIKit/UIActivityItemSource.h>

@class ICAttachment, NSString;

@interface ICAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource> {

	ICAttachment* _attachment;

}

@property (assign,nonatomic,__weak) ICAttachment * attachment;                 //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentTypeUTI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttachment:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(NSString *)attachmentTypeUTI;
@end

