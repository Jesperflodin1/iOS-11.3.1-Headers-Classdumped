/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString;

@interface UICreatePDFActivityItem : NSObject <QLPreviewItem> {

	NSURL* _previewItemURL;
	NSString* _previewItemTitle;

}

@property (nonatomic,retain) NSURL * previewItemURL;                   //@synthesize previewItemURL=_previewItemURL - In the implementation block
@property (nonatomic,retain) NSString * previewItemTitle;              //@synthesize previewItemTitle=_previewItemTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)previewItemURL;
-(NSString *)previewItemTitle;
-(void)setPreviewItemURL:(NSURL *)arg1 ;
-(void)setPreviewItemTitle:(NSString *)arg1 ;
@end

