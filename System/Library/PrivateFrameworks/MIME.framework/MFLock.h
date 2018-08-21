/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFLock : NSLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
@end

