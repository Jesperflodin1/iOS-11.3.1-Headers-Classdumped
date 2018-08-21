/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSSecureCoding;
@interface BLTObjectCacheItem : NSObject {

	id<NSSecureCoding> _object;
	double _lastAccessedDate;

}

@property (nonatomic,readonly) id<NSSecureCoding> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) double lastAccessedDate;                //@synthesize lastAccessedDate=_lastAccessedDate - In the implementation block
+(id)cacheItemWithObject:(id)arg1 ;
-(id)description;
-(id<NSSecureCoding>)object;
-(void)touch;
-(id)initWithObject:(id)arg1 ;
-(double)lastAccessedDate;
@end

