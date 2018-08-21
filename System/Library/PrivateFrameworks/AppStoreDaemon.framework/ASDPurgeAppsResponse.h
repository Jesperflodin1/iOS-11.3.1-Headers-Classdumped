/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgedSize;
	NSArray* _purgedApps;

}

@property (nonatomic,readonly) long long purgedSize;              //@synthesize purgedSize=_purgedSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgedApps;              //@synthesize purgedApps=_purgedApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPurgedSize:(long long)arg1 purgedApps:(id)arg2 ;
-(NSArray *)purgedApps;
-(long long)purgedSize;
@end
