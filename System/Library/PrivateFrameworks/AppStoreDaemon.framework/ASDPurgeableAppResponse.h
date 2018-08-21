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

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	long long _purgeableSize;
	NSArray* _purgeableApps;

}

@property (nonatomic,readonly) long long purgeableSize;              //@synthesize purgeableSize=_purgeableSize - In the implementation block
@property (nonatomic,readonly) NSArray * purgeableApps;              //@synthesize purgeableApps=_purgeableApps - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)purgeableSize;
-(id)initWithPurgeableSize:(long long)arg1 purgeableApps:(id)arg2 ;
-(NSArray *)purgeableApps;
@end

