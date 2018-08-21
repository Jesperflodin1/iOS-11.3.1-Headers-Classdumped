/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {

	unsigned long long _threadID;
	NSString* _threadDescription;

}

@property (nonatomic,readonly) unsigned long long threadID; 
@property (nonatomic,readonly) NSString * threadDescription; 
+(void)initialize;
-(id)initWithDescription:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(NSString *)threadDescription;
-(id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2 ;
-(id)_allCurrentThreadIDs;
-(unsigned long long)threadID;
@end

