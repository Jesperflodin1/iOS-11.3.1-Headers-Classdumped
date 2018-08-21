/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/TSUFlushable.h>

@protocol NSLocking;
@class OITSUFlushingManager, NSObject, NSString;

@interface OITSUFlushableObject : NSObject <TSUFlushable> {

	Ai _retainCount;
	Ai _ownerCount;
	OITSUFlushingManager* _flushingManager;
	NSObject*<NSLocking> _flushingManagerIvarLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(void)flush;
-(void)unload;
-(id)ownerAutoreleasedAccess;
-(BOOL)hasFlushableContent;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(id)ownerRetain;
-(void)ownerRelease;
@end

