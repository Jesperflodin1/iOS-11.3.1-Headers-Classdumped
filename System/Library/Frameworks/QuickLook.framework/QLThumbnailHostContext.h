/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSExtensionContext.h>

@class NSOperationQueue;

@interface QLThumbnailHostContext : NSExtensionContext {

	NSOperationQueue* _thumbnailGenerationConcurrenQueue;

}

@property (nonatomic,retain) NSOperationQueue * thumbnailGenerationConcurrenQueue;              //@synthesize thumbnailGenerationConcurrenQueue=_thumbnailGenerationConcurrenQueue - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(NSOperationQueue *)thumbnailGenerationConcurrenQueue;
-(id)protocolServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)generateThumbnailOfSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 withItem:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setThumbnailGenerationConcurrenQueue:(NSOperationQueue *)arg1 ;
@end

