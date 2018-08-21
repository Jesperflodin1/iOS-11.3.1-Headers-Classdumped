/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream

@property (readonly) BOOL hasBytesAvailable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
-(SCD_Struct_NS17)_cfStreamError;
-(unsigned long long)_cfTypeID;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasBytesAvailable;
@end

