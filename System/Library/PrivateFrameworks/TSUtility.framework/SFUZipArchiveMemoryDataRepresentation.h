/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/SFUDataRepresentation.h>
#import <libobjc.A.dylib/SFUZipArchiveDataRepresentation.h>

@class NSData, NSString;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	NSData* mData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(BOOL)isReadable;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
@end

