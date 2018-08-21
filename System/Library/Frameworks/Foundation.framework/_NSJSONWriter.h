/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSOutputStream;

@interface _NSJSONWriter : NSObject {

	NSOutputStream* outputStream;
	int kind;
	char* dataBuffer;
	unsigned long long dataBufferLen;
	unsigned long long dataLen;
	BOOL freeDataBuffer;
	char* tempBuffer;
	unsigned long long tempBufferLen;
	long long totalDataWritten;

}
-(id)init;
-(void)dealloc;
-(void)resizeTemporaryBuffer:(unsigned long long)arg1 ;
-(id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(long long)appendString:(id)arg1 range:(NSRange)arg2 ;
@end

