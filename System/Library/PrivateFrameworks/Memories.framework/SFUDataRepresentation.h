/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface SFUDataRepresentation : NSObject
-(BOOL)isEqual:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isReadable;
-(long long)encodedLength;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(unsigned long long)readIntoData:(id)arg1 ;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(BOOL)isEncrypted;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(xmlDoc*)xmlDocument;
@end
