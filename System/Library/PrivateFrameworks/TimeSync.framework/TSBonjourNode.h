/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TSBonjourNode : NSObject {

	NSString* _name;
	NSString* _type;
	NSString* _domain;
	NSDictionary* _addresses;

}

@property (nonatomic,copy) NSDictionary * addresses;                //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(NSString *)type;
-(NSString *)domain;
-(void)setAddresses:(NSDictionary *)arg1 ;
-(NSDictionary *)addresses;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 ;
-(void)addedOnInterface:(unsigned)arg1 named:(id)arg2 ;
-(void)removedFromInterface:(unsigned)arg1 named:(id)arg2 ;
@end
