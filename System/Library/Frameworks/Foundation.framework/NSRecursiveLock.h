/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {

	void* _priv;

}

@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(BOOL)isLocking;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)lock;
-(void)unlock;
@end

