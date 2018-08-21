/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageRenderRequest.h>

@class NSString, NSDictionary;

@interface NUImageDataRequest : NUImageRenderRequest {

	NSString* _dataExtractor;
	NSDictionary* _options;

}

@property (copy) NSString * dataExtractor;                //@synthesize dataExtractor=_dataExtractor - In the implementation block
@property (readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NSDictionary *)options;
-(id)initWithComposition:(id)arg1 ;
-(id)newRenderJob;
-(id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(NSString *)dataExtractor;
-(void)setDataExtractor:(NSString *)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
@end

