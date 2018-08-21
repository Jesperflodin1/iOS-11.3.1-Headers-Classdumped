/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDocumentResourceFileURLProvider.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSString;

@interface TSPDocumentResourceCache : NSObject <TSPDocumentResourceFileURLProvider> {

	NSURL* _URL;
	NSObject*<OS_dispatch_queue> _ioQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(void)cacheDocumentResourceAtURL:(id)arg1 copy:(BOOL)arg2 forInfo:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)fileURLForDocumentResourceInfo:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)initWithURL:(id)arg1 ;
-(void)purge;
@end

