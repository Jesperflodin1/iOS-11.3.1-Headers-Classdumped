/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLItemTransformerProtocol.h>

@class NSString;

@interface QLDictionaryItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedOutputClasses;
-(id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
@end

