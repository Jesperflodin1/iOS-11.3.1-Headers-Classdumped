/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYStreamTransaction.h>

@class NSDictionary, NSURL, NSProgress, NSInputStream, NSString;

@interface SYInputStreamTransaction : NSObject <SYStreamTransaction> {

	NSInputStream* _stream;
	NSDictionary* _metadata;
	NSURL* _fileURL;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSInputStream * inputStream;              //@synthesize stream=_stream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
-(long long)type;
-(NSProgress *)progress;
-(NSDictionary *)metadata;
-(id)initWithURL:(id)arg1 metadata:(id)arg2 decompressedSize:(unsigned long long)arg3 ;
-(NSInputStream *)inputStream;
@end

