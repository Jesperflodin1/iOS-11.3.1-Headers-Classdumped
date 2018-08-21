/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSFileHandle;

@interface NSPipe : NSObject

@property (retain,readonly) NSFileHandle * fileHandleForReading; 
@property (retain,readonly) NSFileHandle * fileHandleForWriting; 
+(id)pipe;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_closeOnDealloc;
-(NSFileHandle *)fileHandleForReading;
-(NSFileHandle *)fileHandleForWriting;
-(id)init;
@end

