/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSObject;

@interface EntityMapCacheEntry : NSObject {

	NSDate* _expiryTime;
	NSObject* _entityName;

}

@property (retain) NSDate * expiryTime;                //@synthesize expiryTime=_expiryTime - In the implementation block
@property (retain) NSObject * entityName;              //@synthesize entityName=_entityName - In the implementation block
-(id)description;
-(NSObject *)entityName;
-(void)setEntityName:(NSObject *)arg1 ;
-(NSDate *)expiryTime;
-(void)setExpiryTime:(NSDate *)arg1 ;
@end

